import sys
import os
import base64
from PyQt6.QtWidgets import (
    QApplication, QMainWindow, QPushButton, QVBoxLayout, QLabel, QComboBox, QSizePolicy, QSpacerItem,
    QHBoxLayout, QWidget, QDialog, QLineEdit, QFormLayout, QDialogButtonBox, QFileDialog
)
from PyQt6.QtGui import QIcon, QPixmap, QBrush, QPalette
from PyQt6.QtCore import Qt
from server_browser_window import ServerBrowserWindow  # Correct import for Server Browser Window

class HostDialog(QDialog):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("Host Settings")
        self.setFixedSize(300, 225)

        layout = QFormLayout()
        self.server_name_input = QLineEdit(self)
        self.server_password_input = QLineEdit(self)
        self.port_input = QLineEdit(self)
        self.game_mode_input = QComboBox(self)
        self.map_input = QComboBox(self)
        self.time_of_day_input = QComboBox(self)

        # Host Defaults
        self.server_name_input.setText("Outlawn Test")
        self.port_input.setText("25200")
        self.setLayout(layout)

        self.game_mode_input.addItems(["Garden Ops", "Welcome Mat", "Gardens & Graveyards", "Team Vanquish", "Gnome Bomb", "Mixed", "Taco Bandit Crazy", "Gnome Bomb", "Suburbination",])
        self.map_input.addItems(["Wall-nut Hills", "Cactus Canyon", "Main Street", "Driftwood Shores", "Zomboss Estate", "Jewel Junction", "Garden Center", "Suburban Flats",])
        self.time_of_day_input.addItems(["Day", "Night",])

        layout.addRow("Server Name:", self.server_name_input)
        layout.addRow("Server Password:", self.server_password_input)
        layout.addRow("Port:", self.port_input)
        layout.addRow("Game Mode:", self.game_mode_input)
        layout.addRow("Map:", self.map_input)
        layout.addRow("Time of Day:", self.time_of_day_input)

        button_box = QDialogButtonBox(QDialogButtonBox.StandardButton.Ok | QDialogButtonBox.StandardButton.Cancel)
        button_box.accepted.connect(self.accept)
        button_box.rejected.connect(self.reject)

        layout.addWidget(button_box)
        self.setLayout(layout)

    def get_inputs(self):
        return self.server_name_input.text(), self.server_password_input.text(), self.port_input.text(), self.game_mode_input.currentText(), self.map_input.currentText(), self.time_of_day_input.currentText()

class JoinDialog(QDialog):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("Join Settings")
        self.setFixedSize(300, 225)

        layout = QFormLayout()
        self.username_input = QLineEdit(self)
        self.password_input = QLineEdit(self)
        self.ip_input = QLineEdit(self)
        self.modpack_input = QLineEdit(self)

        # Join Defaults
        self.ip_input.setText("127.0.0.1:25100")
        self.modpack_input.setText("Default")
        self.setLayout(layout)

        layout.addRow("Username:", self.username_input)
        layout.addRow("Password:", self.password_input)
        layout.addRow("IP Address:", self.ip_input)
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
        self.setWindowTitle("Project Outlawn Launcher")
        self.setFixedSize(700, 400)

        # Map games to their EXE files
        self.game_exes = {
            "GW1": "PVZ.Main_Win64_Retail.exe",  # EXE for GW1
            "GW2": "GW2.Main_Win64_Retail.exe"   # EXE for GW2
        }
        self.selected_game = "GW1"
        self.exePath = self.game_exes[self.selected_game]  # Initialize with the GW1 EXE path

        self.gw1_pixmap = QPixmap("assets/gw1.jpg")
        self.gw2_pixmap = QPixmap("assets/gw2.jpg")
        self.set_background(self.gw1_pixmap)
        self.initUI()

    def initUI(self):

        self.gameComboBox = QComboBox()
        self.gameComboBox.addItems(["GW1", "GW2"])
        self.gameComboBox.setCurrentIndex(0)
        self.gameComboBox.currentTextChanged.connect(self.update_game_selection)

        hostButton = QPushButton("Host")
        joinButton = QPushButton("Join")
        findFolderButton = QPushButton("Find Game Folder")
        serverBrowserButton = QPushButton("Server Browser")

        button_style = """
        QPushButton {
            background-color: rgba(76, 86, 106, 0.8);
            color: #ECEFF4;
            font-size: 22px;
            padding: 14px;
            border-radius: 5px;
            font-family: 'Arial', sans-serif;
        }
        QPushButton:hover {
            background-color: rgba(94, 129, 172, 0.8);
        }
        """
        for button in [hostButton, joinButton, findFolderButton, serverBrowserButton]:
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
        buttonLayout.addWidget(serverBrowserButton)
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
        serverBrowserButton.clicked.connect(self.openServerBrowser)

    def openHostDialog(self):
        dialog = HostDialog()
        if dialog.exec() == QDialog.DialogCode.Accepted:
            server_name, server_password, port, game_mode, map_name, time_of_day = dialog.get_inputs()
            print(f"Host Details - Server Name: {server_name}, Server Password: {server_password}, Port: {port}, Game Mode: {game_mode}, Map: {map_name}, ToD: {time_of_day}")

    def openJoinDialog(self):
        dialog = JoinDialog()
        if dialog.exec() == QDialog.DialogCode.Accepted:
            username, ip, password, modpack = dialog.get_inputs()
            print(f"Join Details - Username: {username}, IP: {ip}, Password: {password}, Modpack: {modpack}")

            # Write IP to file
            try:
                with open("ip2join.txt", "w") as f:
                    f.write(ip)
            except Exception as e:
                print(f"Failed to write IP to ip2join.txt: {e}")

    def openServerBrowser(self):
        # Open the Server Browser window
        server_browser_window = ServerBrowserWindow()
        server_browser_window.exec()

    def update_game_selection(self, selected_game):
        self.selected_game = selected_game
        self.exePath = self.game_exes[selected_game]  # Update EXE path based on selected game
        print(f"Selected game EXE: {self.exePath}")  # You can use this path to run the game if needed

        if selected_game == "GW1":
            self.set_background(self.gw1_pixmap)
        elif selected_game == "GW2":
            self.set_background(self.gw2_pixmap)

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
            print("Auto search for game folder is not implemented yet.")  # Registry stuff is Windows-only
        else:
            folder = QFileDialog.getExistingDirectory(self, "Select Game Folder", "", QFileDialog.Option.ShowDirsOnly)
            if folder:
                print(f"Selected game folder: {folder}")

if __name__ == '__main__':
    app = QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec())
