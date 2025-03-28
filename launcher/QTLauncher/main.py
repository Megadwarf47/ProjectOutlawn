import sys
import os
import subprocess
import base64
from PyQt6.QtWidgets import (
    QApplication, QMainWindow, QPushButton, QVBoxLayout, QLabel, QComboBox, QSizePolicy, QSpacerItem,
    QHBoxLayout, QWidget, QDialog, QLineEdit, QFormLayout, QDialogButtonBox, QFileDialog
)
from PyQt6.QtGui import QIcon, QPixmap, QBrush, QPalette
from PyQt6.QtCore import Qt

# Base64 encoded icons for GW1 and GW2 (replace with actual base64 data)
GW1_BASE64 = ""
GW2_BASE64 = ""

def base64_to_pixmap(base64_str):
    """Convert a base64 string to QPixmap."""
    padding_needed = len(base64_str) % 4
    if padding_needed:
        base64_str += '=' * (4 - padding_needed)

    byte_data = base64.b64decode(base64_str)
    pixmap = QPixmap()
    pixmap.loadFromData(byte_data)
    return pixmap

class HostDialog(QDialog):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("Host Settings")
        self.setFixedSize(300, 225)

        layout = QFormLayout()

        self.server_name_input = QLineEdit(self)
        self.port_input = QLineEdit(self)
        self.game_mode_input = QComboBox(self)
        self.map_input = QComboBox(self)

        self.game_mode_input.addItem("GameMode1")
        self.game_mode_input.addItem("GameMode2")

        self.map_input.addItem("Map1")
        self.map_input.addItem("Map2")

        layout.addRow("Server Name:", self.server_name_input)
        layout.addRow("Port:", self.port_input)
        layout.addRow("Game Mode:", self.game_mode_input)
        layout.addRow("Map:", self.map_input)

        button_box = QDialogButtonBox(QDialogButtonBox.StandardButton.Ok | QDialogButtonBox.StandardButton.Cancel)
        button_box.accepted.connect(self.accept)
        button_box.rejected.connect(self.reject)

        layout.addWidget(button_box)

        self.setLayout(layout)

    def get_inputs(self):
        return self.server_name_input.text(), self.port_input.text(), self.game_mode_input.currentText(), self.map_input.currentText()


class JoinDialog(QDialog):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("Join Settings")
        self.setFixedSize(300, 225)

        layout = QFormLayout()

        self.username_input = QLineEdit(self)
        self.ip_input = QLineEdit(self)
        self.password_input = QLineEdit(self)
        self.modpack_input = QLineEdit(self)

        layout.addRow("Username:", self.username_input)
        layout.addRow("IP Address:", self.ip_input)
        layout.addRow("Password:", self.password_input)
        layout.addRow("Modpack:", self.modpack_input)

        button_box = QDialogButtonBox(QDialogButtonBox.StandardButton.Ok | QDialogButtonBox.StandardButton.Cancel)
        button_box.accepted.connect(self.accept)
        button_box.rejected.connect(self.reject)

        layout.addWidget(button_box)

        self.setLayout(layout)

    def get_inputs(self):
        return self.username_input.text(), self.ip_input.text(), self.password_input.text(), self.modpack_input.text()


class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("ProjectOutlawn")
        self.setFixedSize(700, 400)

        self.selected_game = "GW1"
        self.exePath = None

        self.gw1_pixmap = base64_to_pixmap(GW1_BASE64)
        self.gw2_pixmap = base64_to_pixmap(GW2_BASE64)

        self.set_background(self.gw1_pixmap)  # Set initial background
        self.initUI()

    def initUI(self):
        self.icon = QIcon(self.gw1_pixmap)
        self.setWindowIcon(self.icon)

        self.gameComboBox = QComboBox()
        self.gameComboBox.addItem("GW1")
        self.gameComboBox.addItem("GW2")
        self.gameComboBox.setCurrentIndex(0)
        self.gameComboBox.currentTextChanged.connect(self.update_game_selection)

        hostButton = QPushButton("Host")
        joinButton = QPushButton("Join")
        findFolderButton = QPushButton("Find Game Folder")

        button_font_size = 22
        button_padding = 14
        button_style = f"""
        QPushButton {{
            background-color: rgba(76, 86, 106, 0.8);
            color: #ECEFF4;
            font-size: {button_font_size}px;
            padding: {button_padding}px;
            border-radius: 5px;
            font-family: 'Arial', sans-serif;
        }}
        QPushButton:hover {{
            background-color: rgba(94, 129, 172, 0.8);
        }}
        """
        for button in [hostButton, joinButton, findFolderButton]:
            button.setStyleSheet(button_style)
            button.setSizePolicy(QSizePolicy.Policy.Expanding, QSizePolicy.Policy.Expanding)

        mainLayout = QVBoxLayout()
        mainLayout.addWidget(QLabel("Select Game:"))
        mainLayout.addWidget(self.gameComboBox)
        mainLayout.addItem(QSpacerItem(20, 40, QSizePolicy.Policy.Minimum, QSizePolicy.Policy.Expanding))

        buttonLayout = QVBoxLayout()
        buttonLayout.setAlignment(Qt.AlignmentFlag.AlignCenter)
        buttonLayout.addItem(QSpacerItem(20, 40, QSizePolicy.Policy.Minimum, QSizePolicy.Policy.Expanding))
        buttonLayout.addWidget(hostButton)
        buttonLayout.addWidget(joinButton)
        buttonLayout.addWidget(findFolderButton)
        buttonLayout.addItem(QSpacerItem(20, 40, QSizePolicy.Policy.Minimum, QSizePolicy.Policy.Expanding))

        buttonContainer = QWidget()
        buttonContainer.setLayout(buttonLayout)
        hLayout = QHBoxLayout()
        hLayout.addStretch(1)
        hLayout.addWidget(buttonContainer)
        hLayout.addStretch(1)

        mainLayout.addLayout(hLayout)

        centralWidget = QWidget()
        centralWidget.setLayout(mainLayout)
        self.setCentralWidget(centralWidget)

        hostButton.clicked.connect(self.openHostDialog)
        joinButton.clicked.connect(self.openJoinDialog)
        findFolderButton.clicked.connect(lambda: self.findGameFolder(auto_search=False))

    def openHostDialog(self):
        dialog = HostDialog()
        if dialog.exec() == QDialog.DialogCode.Accepted:
            server_name, port, game_mode, map_name = dialog.get_inputs()
            print(f"Host Details - Server Name: {server_name}, Port: {port}, Game Mode: {game_mode}, Map: {map_name}")
            self.start_host_game(server_name, port, game_mode, map_name)

    def openJoinDialog(self):
        dialog = JoinDialog()
        if dialog.exec() == QDialog.DialogCode.Accepted:
            username, ip, password, modpack = dialog.get_inputs()
            print(f"Join Details - Username: {username}, IP: {ip}, Password: {password}, Modpack: {modpack}")
            self.join_game(username, ip, password, modpack)

    def update_game_selection(self, selected_game):
        self.selected_game = selected_game
        new_pixmap = self.gw1_pixmap if self.selected_game == "GW1" else self.gw2_pixmap
        self.set_background(new_pixmap)

    def set_background(self, pixmap):
        if not pixmap.isNull():
            scaled_pixmap = pixmap.scaled(self.size(), Qt.AspectRatioMode.KeepAspectRatio, Qt.TransformationMode.SmoothTransformation)
            palette = self.palette()
            palette.setBrush(QPalette.ColorRole.Window, QBrush(scaled_pixmap))
            self.setPalette(palette)
        else:
            self.setStyleSheet("background-color: #2E3440;")

    def findGameFolder(self, auto_search):
        if auto_search:
            print("Auto search for game folder is not implemented yet.")
        else:
            folder = QFileDialog.getExistingDirectory(self, "Select Game Folder", "", QFileDialog.Option.ShowDirsOnly)
            if folder:
                print(f"Selected game folder: {folder}")
                game_exe = "PVZ.Main_Win64_Retail.exe" if self.selected_game == "GW1" else "GW2.Main_Win64_Retail.exe"
                exe_path = os.path.join(folder, game_exe)

                if os.path.isfile(exe_path):
                    print(f"Game executable found: {exe_path}")
                    self.exePath = exe_path
                else:
                    print(f"Error: {game_exe} not found in the selected folder.")

if __name__ == '__main__':
    app = QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec())
