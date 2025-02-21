#include "mainwindow.h"
#include <QLabel>
#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QFormLayout>
#include <QStackedWidget>
#include <QWidget>
#include <QHBoxLayout>
#include <QFileDialog>
#include <QProcess>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "GWLauncher_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }

    MainWindow w;
    QVBoxLayout *mainLayout = new QVBoxLayout;
    QStackedWidget *stackedWidget = new QStackedWidget;

    // Create buttons
    QPushButton *hostButton = new QPushButton("Host");
    QPushButton *joinButton = new QPushButton("Join");

    // Create a layout for buttons (use QVBoxLayout for vertical stacking)
    QVBoxLayout *buttonLayout = new QVBoxLayout;
    buttonLayout->addWidget(hostButton);
    buttonLayout->addWidget(joinButton);
    buttonLayout->setAlignment(Qt::AlignLeft); // Align buttons to the left

    QWidget *hostPage = new QWidget;
    QVBoxLayout *hostLayout = new QVBoxLayout;
    hostLayout->addWidget(new QLabel("Host Settings"));
    hostPage->setLayout(hostLayout);

    QWidget *joinPage = new QWidget;
    QVBoxLayout *joinLayout = new QVBoxLayout;
    QFormLayout *formLayout = new QFormLayout;
    QLineEdit *ipInput = new QLineEdit;
    QLineEdit *portInput = new QLineEdit;
    QLineEdit *usernameInput = new QLineEdit;
    QLineEdit *modpackInput = new QLineEdit;
    formLayout->addRow("IP:", ipInput);
    formLayout->addRow("Port:", portInput);
    formLayout->addRow("Username:", usernameInput);
    formLayout->addRow("Modpack:", modpackInput);
    joinLayout->addLayout(formLayout);
    QPushButton *submitButton = new QPushButton("Submit");
    joinLayout->addWidget(submitButton);
    joinPage->setLayout(joinLayout);

    stackedWidget->addWidget(hostPage);
    stackedWidget->addWidget(joinPage);

    // Add button layout and stacked widget to the main layout
    mainLayout->addLayout(buttonLayout); // Add button layout
    mainLayout->addWidget(stackedWidget);

    // Ask the user for the path to the .exe file at startup
    QString exePath = QFileDialog::getOpenFileName(&w, "Select Executable", QString(), "*.exe");
    if (exePath.isEmpty()) {
        QMessageBox::critical(&w, "Error", "No executable selected, the program will now exit.");
        return -1; // Exit if no file is selected
    }

    QObject::connect(hostButton, &QPushButton::clicked, [&](){
        // Launch the .exe file with command line args when "Host" button is clicked
        QProcess::startDetached(exePath, QStringList() << "host" << "arg1" << "arg2");
        stackedWidget->setCurrentWidget(hostPage);
    });

    QObject::connect(joinButton, &QPushButton::clicked, [&](){
        // Retrieve the user inputs
        QString username = usernameInput->text();
        QString ip = ipInput->text();
        QString port = portInput->text();
        QString modpack = modpackInput->text();

        // Launch the .exe file with command line args when "Join" button is clicked
        QProcess::startDetached(exePath, QStringList() << "-username" << username << "-ip" << ip << "-port" << port << "-modpack" << modpack);
        stackedWidget->setCurrentWidget(joinPage);
    });

    QWidget *centralWidget = new QWidget;
    centralWidget->setLayout(mainLayout);
    w.setCentralWidget(centralWidget);

    w.show();
    return a.exec();
}
