from PyQt6.QtWidgets import QDialog, QVBoxLayout, QLabel, QPushButton

class ServerBrowserWindow(QDialog):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("Server Browser")
        self.setFixedSize(400, 300)

        layout = QVBoxLayout()

        label = QLabel("Server list will be displayed here")
        layout.addWidget(label)

        button = QPushButton("Close")
        button.clicked.connect(self.close)
        layout.addWidget(button)

        self.setLayout(layout)
