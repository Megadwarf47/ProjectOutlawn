from PyQt6.QtWidgets import QDialog, QVBoxLayout, QLabel, QPushButton, QLineEdit, QFormLayout
from PyQt6.QtCore import Qt
import requests
import yaml

class ServerBrowserWindow(QDialog):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("Server Browser")
        self.setFixedSize(400, 300)

        layout = QVBoxLayout()

        # Add Master Server Section
        master_server_label = QLabel("Master Server URL:")
        self.master_server_input = QLineEdit()
        self.master_server_input.setPlaceholderText("Enter URL to a .yaml file")

        # Set default URL
        default_url = "https://raw.githubusercontent.com/Twig6943/ProjectOutlawn/refs/heads/main/launcher/MasterServer.yaml"
        self.master_server_input.setText(default_url)

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

        # Load YAML on startup with the default URL
        self.load_yaml()

    def load_yaml(self):
        yaml_url = self.master_server_input.text()
        if yaml_url:
            # Attempt to fetch and parse the YAML data
            try:
                response = requests.get(yaml_url)
                if response.status_code == 200:
                    server_data = yaml.safe_load(response.text)
                    self.display_servers(server_data)
                else:
                    self.server_list_label.setText(f"Failed to load YAML: {response.status_code}")
            except requests.RequestException as e:
                self.server_list_label.setText(f"Error loading YAML: {str(e)}")
        else:
            self.server_list_label.setText("Please enter a valid URL.")

    def display_servers(self, server_data):
        # Here you can implement the logic to display the server data
        # For now, just show a message with the number of servers
        if isinstance(server_data, list):
            self.server_list_label.setText(f"Found {len(server_data)} servers.")
        else:
            self.server_list_label.setText("Invalid YAML format.")

# Example usage
if __name__ == "__main__":
    from PyQt6.QtWidgets import QApplication
    app = QApplication([])
    window = ServerBrowserWindow()
    window.show()
    app.exec()
