#include "QtWidgetsApplication1.h"
#include <QtWidgets/QApplication>
#include <QLabel>
#include <QLineEdit>
#include <qpushbutton.h>
#include <qmessagebox.h>
#include <QVBoxLayout>

class ResetPasswordWidget : public QWidget
{
 

public:
    ResetPasswordWidget(QWidget* parent = nullptr)
        : QWidget(parent)
    {
        QVBoxLayout* layout = new QVBoxLayout(this);

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

        layout->addWidget(anmeldung, Qt::AlignAbsolute, Qt::AlignCenter);
        grid->setContentsMargins(20, 0, 20, 0);
        grid->setSpacing(1);

        grid->addWidget(email, 0, 0);
        grid->addWidget(txtEmail, 0, 1);

        layout->addLayout(grid);
        layout->addWidget(absenden, Qt::AlignCenter, Qt::AlignHCenter);
    }

};
