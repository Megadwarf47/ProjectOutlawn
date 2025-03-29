from PyQt6.QtWidgets import QDialog, QVBoxLayout, QLabel, QPushButton, QLineEdit, QFormLayout
from PyQt6.QtCore import Qt

class ServerBrowserWindow(QDialog):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("Server Browser")
        self.setFixedSize(500, 400)

        layout = QVBoxLayout()

        # Add Master Server Section
        master_server_label = QLabel("Master Server URL:")
        self.master_server_input = QLineEdit()
        self.master_server_input.setPlaceholderText("Enter URL to a .yaml file")
        self.load_button = QPushButton("Load YAML")
        self.load_button.clicked.connect(self.load_yaml)

        # Layout for master server input
        master_server_layout = QFormLayout()
        master_server_layout.addRow(master_server_label, self.master_server_input)
        master_server_layout.addWidget(self.load_button)

        layout.addLayout(master_server_layout)

        # Add label for server list display
        self.server_list_label = QLabel("Server list will be displayed here")
        layout.addWidget(self.server_list_label)

        # Close button
        button = QPushButton("Close")
        button.clicked.connect(self.close)
        layout.addWidget(button)

        self.setLayout(layout)

    def load_yaml(self):
        yaml_url = self.master_server_input.text()
        if yaml_url:
            # Here you would process the URL to load the YAML data
            # For demonstration, we just update the label
            self.server_list_label.setText(f"Loading servers from {yaml_url}...")
        else:
            self.server_list_label.setText("Please enter a valid URL.")

# Example usage
if __name__ == "__main__":
    from PyQt6.QtWidgets import QApplication
    app = QApplication([])
    window = ServerBrowserWindow()
    window.show()
    app.exec()
