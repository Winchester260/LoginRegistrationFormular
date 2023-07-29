#include "QtWidgetsApplication1.h"
#include <QtWidgets/QApplication>
#include <QLabel>
#include <QLineEdit>
#include <qpushbutton.h>
#include <qmessagebox.h>
#include <QVBoxLayout>
#include "resetpasswort.cpp"
#include <qfile.h>
#include <QTextStream>
#include <qstandardpaths.h>

void createnewAccount(QVBoxLayout& l) {
    QLabel* anmeldung = new QLabel("Account erstellen");
    QLabel* vorname = new QLabel("Vorname:");
    QLineEdit* txtvn = new QLineEdit;
    QLabel* nachname = new QLabel("Nachname:");
    QLineEdit* txtnn = new QLineEdit;
    QLabel* email = new QLabel("Email:");
    QLineEdit* txtEmail = new QLineEdit;
    QLabel* passwort = new QLabel("Passwort:");
    QLineEdit* txtpw = new QLineEdit;
    QPushButton* absenden = new QPushButton("Erstellen");
    QGridLayout* grid = new QGridLayout;

    txtpw->setEchoMode(QLineEdit::Password);

    QFont font = anmeldung->font();
    font.setPointSize(12); // Set font size
    font.setBold(true); // Set font weight to bold
    anmeldung->setFont(font);
    txtvn->setFixedWidth(200);
    txtnn->setFixedWidth(200);
    txtEmail->setFixedWidth(200);
    txtpw->setFixedWidth(200);
    l.addStretch(10);
    l.addWidget(anmeldung, Qt::AlignAbsolute, Qt::AlignCenter);
    l.addStretch(10);
    grid->setContentsMargins(20, 10, 50, 20);
    grid->setSpacing(20);
    grid->addWidget(vorname, 0, 0);
    grid->addWidget(txtvn, 0, 1);
    grid->addWidget(nachname, 1, 0);
    grid->addWidget(txtnn, 1, 1);
    grid->addWidget(email, 2, 0);
    grid->addWidget(txtEmail, 2, 1);
    grid->addWidget(passwort, 3, 0);
    grid->addWidget(txtpw, 3, 1);
    l.addLayout(grid);
    l.addStretch(10);
    l.addWidget(absenden, Qt::AlignCenter, Qt::AlignHCenter);
    l.addStretch(10);
}



void resetpasswort(QVBoxLayout& layout) {

    QLabel* anmeldung = new QLabel("Passwort zuruecksetzen");
    QLabel* email = new QLabel("Email:");
    QLineEdit* txtEmail = new QLineEdit;
    QPushButton* absenden = new QPushButton("Absenden");
    QGridLayout* grid = new QGridLayout;

    QFont font = anmeldung->font();
    font.setPointSize(12); // Set font size
    font.setBold(true); // Set font weight to bold
    anmeldung->setFont(font);
    txtEmail->setFixedWidth(200);
    

    layout.addWidget(anmeldung, Qt::AlignAbsolute, Qt::AlignCenter);
    layout.addStretch(20);
    grid->setContentsMargins(20, 0, 20, 0);
    grid->setSpacing(1);

    grid->addWidget(email, 0, 0);
    grid->addWidget(txtEmail, 0, 1);
    
    layout.addLayout(grid);
    layout.addStretch(50);
    layout.addWidget(absenden, Qt::AlignCenter, Qt::AlignHCenter);
    layout.addStretch(50);
}

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
     QWidget window;
    QWidget window2;
    QWidget window3;
    window.setStyleSheet("background-color:#D3D3D3;");
    window.setWindowIcon(QIcon("C:\\Users\\Winch\\Desktop\\ALGDA\\QtWidgetsApplication1\\QtWidgetsApplication1\\Icon\\icon.png"));
    window2.setStyleSheet("background-color:#D3D3D3;");
    window2.setWindowIcon(QIcon("C:\\Users\\Winch\\Desktop\\ALGDA\\QtWidgetsApplication1\\QtWidgetsApplication1\\Icon\\icon.png"));
    window3.setStyleSheet("background-color:#D3D3D3;");
    window3.setWindowIcon(QIcon("C:\\Users\\Winch\\Desktop\\ALGDA\\QtWidgetsApplication1\\QtWidgetsApplication1\\Icon\\icon.png"));

    QLineEdit txtUsername;
    QLineEdit textpassword;

    QPushButton back("<--");
    back.setStyleSheet("color : black;");
    back.setFixedSize(25, 25);
    QPushButton backToMainPage("<--");
    backToMainPage.setStyleSheet("color : black;");
    backToMainPage.setFixedSize(25, 25);

    QVBoxLayout layout(&window);
    QVBoxLayout layout2(&window2);
    QVBoxLayout layout3(&window3);

    QHBoxLayout anm;

    QGridLayout grid;
 
 
    QLabel anmeldung("Login");
    QFont font = anmeldung.font();
    font.setPointSize(12); // Set font size
    font.setBold(true); // Set font weight to bold
    anmeldung.setFont(font);

    // Set color and other properties using setStyleSheet
    anmeldung.setStyleSheet("QLabel { color : black; }"); // Change the color as per your needs

    QLabel username("Username/Email:");
    QLabel password("Password:");

    QPushButton btnanmelden("Anmelden");
    btnanmelden.setStyleSheet("QPushButton {"
        "background-color : black;"  // Set background color
        "color : white;"// Set text color
        "border : none;" 
        "}");

    QPushButton btnacounterstellen("Account erstellen");
    btnacounterstellen.setFixedSize(75, 50);
    btnacounterstellen.setStyleSheet("border: none;"// Remove border
        "color : black;"// Set text color
    );  
    QPushButton btnpwvergessen("Passwort vergessen?");
    btnpwvergessen.setFixedSize(110, 50);
    btnpwvergessen.setStyleSheet("border: none;"
        "color : black;");

    textpassword.setEchoMode(QLineEdit::Password);
 


    btnanmelden.setFixedSize(150, 25);    
    btnacounterstellen.setFixedSize(100, 25);

    anmeldung.setAlignment(Qt::AlignCenter);
    txtUsername.setFixedWidth(150);
    textpassword.setFixedWidth(150);

    
    anm.addWidget(&anmeldung);

    grid.setSpacing(10);
    grid.setContentsMargins(10, 0, 50, 0);
    grid.addWidget(&username,0,0);
    grid.addWidget(&txtUsername,0,1);
    grid.addWidget(&password, 1, 0);
    grid.addWidget(&textpassword, 1, 1);



    layout.addStretch(1);   
    layout.addLayout(&anm);
    layout.addStretch(1);
    layout.addLayout(&grid);
    layout.addWidget(&btnpwvergessen, Qt::AlignAbsolute, Qt::AlignRight);
    layout.addWidget(&btnanmelden, Qt::AlignCenter,Qt::AlignHCenter);
    layout.addWidget(&btnacounterstellen, Qt::AlignCenter, Qt::AlignHCenter);
    layout.addStretch(1);



    layout2.addWidget(&back,Qt::AlignAbsolute, Qt::AlignLeft);
    createnewAccount(layout2);
    layout3.addWidget(&backToMainPage, Qt::AlignAbsolute, Qt::AlignLeft);
    resetpasswort(layout3);

 
    QList<QPushButton*> buttonswindow3 = window3.findChildren<QPushButton*>();
    QList<QPushButton*> buttonswindow2 = window2.findChildren<QPushButton*>();
    QList<QLineEdit*> txt1 = window3.findChildren<QLineEdit*>();
    QList<QLineEdit*> txt2 = window2.findChildren<QLineEdit*>();
    QPushButton *p1 = buttonswindow3[1];
    QPushButton* p2 = buttonswindow2[1];
    
    
    QObject::connect(p1, &QPushButton::clicked, [&]() {
        QString t1 = txt1[0]->text();

        if (t1.isEmpty()) {
                QMessageBox::information(nullptr, "Fehler", "Bitte geben Sie Ihre Email Adresse an!");

        }
        else {
            if (!t1.contains("@") || !t1.contains('.')) {
                QMessageBox::information(nullptr, "Fehler", "Bitte geben Sie Ihre Email Adresse an!");

            }
            else {
                
                QMessageBox::information(nullptr, "Erfolgreich", "Wenn die Email Addresse in unseren System ist, erhalten Sie \n in kuerze eine Mail, um Ihr Passwort zurueckzusetzen.");
                window3.hide();
                window.show();
            }
        }
        });


    QObject::connect(p2, &QPushButton::clicked, [&]() {
        QString vn = txt2[0]->text();
        QString nn = txt2[1]->text();
        QString email = txt2[2]->text();
        QString pw = txt2[3]->text();

        if (vn.isEmpty() || nn.isEmpty() || email.isEmpty() || pw.isEmpty()) {
            QMessageBox::information(nullptr, "Fehler", "Bitte geben Sie gueltiges ein!!");

        }
        else {
            if (!email.contains("@") || !email.contains('.')) {
                QMessageBox::information(nullptr, "Fehler", "Bitte geben Sie Ihre Email Adresse korrekt an!");

            }
            if (pw.size() < 6) {
                QMessageBox::information(nullptr, "Fehler", "Bitte waehlen Sie ein Passwort aus, der laenger als sechs Zeichen ist.");

            }
            else {
                QString desktopPath = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
                QFile file(desktopPath + "/login.txt");
                if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
                    qDebug() << "Could not open file for writing: " << file.errorString();
                    return;
                }
 
                    QTextStream stream(&file);
                    stream << "Username: " << vn << "\n";
                    stream << "Nachname: " << nn << "\n";
                    stream << "Email: " << email << "\n";
                    stream << "Password: " << pw << "\n";
                    file.close();
 
                QMessageBox::information(nullptr, "Erfolgreich", "Sie erhalten in kuerze eine Email um Ihre Registration zu bestaetigen!");
                
                window2.hide();
                window.show();
        }
        }
        });

    QObject::connect(&btnanmelden, &QPushButton::clicked, [&]() {
        QString username = txtUsername.text();
        QString password = textpassword.text();
        if (password.isEmpty() || username.isEmpty()) {
            QMessageBox::information(nullptr, "Fehler", "Bitte geben Sie Username/Email und Password ein!!");

        }
        else {
            QString desktopPath = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
            QFile file(desktopPath + "/login.txt");
            QString line;
            QString user;
            QString pw;

            if (!file.open(QIODevice::ReadOnly)) {
                qDebug() << "Could not open file for reading: " << file.errorString();
                return;
            }
            QTextStream in(&file);
            while (!in.atEnd()) {
                
                line = in.readLine();
                QStringList parts = line.split(':');
                if (parts[0] == "Username") {
                    user = parts[1].trimmed();
                }
                else if (parts[0] == "Password") {
                    pw = parts[1].trimmed();
                }
            }
            if (username.contains(user) && password.contains(pw)) {
                QMessageBox::information(nullptr, "Erfolgreich","Erfolgreich eingeloggt!");
                txtUsername.setText("");
                textpassword.setText("");
            }
            else {
                txtUsername.setText("");
                textpassword.setText("");
                QMessageBox::information(nullptr, "Fehler", "Passwort oder Username falsch!");

            }
        }
        });

    QObject::connect(&btnacounterstellen, &QPushButton::clicked, [&]() {
        window.hide();
        window2.show();

        });

    QObject::connect(&btnpwvergessen, &QPushButton::clicked, [&]() {
        window.hide();
        window3.show();

        });


    QObject::connect(&back, &QPushButton::clicked, [&]() {
        window.show();
        window2.hide();

        });


    QObject::connect(&backToMainPage, &QPushButton::clicked, [&]() {
        window.show();
        window3.hide();

        });

    window.setFixedSize(350, 250);
    window2.setFixedSize(350, 350);
    window3.setFixedSize(350, 250);
    window.setWindowTitle("Login-Formular");
    window2.setWindowTitle("Account erstellen!");
    window3.setWindowTitle("Passwort wiederherstellen");
    window.show();

    return app.exec();
}
 
