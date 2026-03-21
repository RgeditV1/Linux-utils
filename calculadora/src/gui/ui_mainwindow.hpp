/********************************************************************************
** Form generated from reading UI file 'calculadora.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#pragma once

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculadora
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLineEdit *display;
    QFrame *botones;
    QPushButton *cero;
    QPushButton *punto;
    QPushButton *uno;
    QPushButton *dos;
    QPushButton *tres;
    QPushButton *cuatro;
    QPushButton *cinco;
    QPushButton *seis;
    QPushButton *siete;
    QPushButton *ocho;
    QPushButton *nueve;
    QPushButton *sum;
    QPushButton *rest;
    QPushButton *mult;
    QPushButton *div;
    QPushButton *del;
    QPushButton *igual;

    void setupUi(QMainWindow *Calculadora)
    {
        if (Calculadora->objectName().isEmpty())
            Calculadora->setObjectName(QString::fromUtf8("Calculadora"));
        Calculadora->setWindowModality(Qt::WindowModality::ApplicationModal);
        Calculadora->resize(293, 294);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Calculadora->sizePolicy().hasHeightForWidth());
        Calculadora->setSizePolicy(sizePolicy);
        Calculadora->setBaseSize(QSize(260, 32));
        QFont font;
        font.setPointSize(20);
        Calculadora->setFont(font);
        Calculadora->setInputMethodHints(Qt::InputMethodHint::ImhPreferNumbers|Qt::InputMethodHint::ImhPreferUppercase);
        centralwidget = new QWidget(Calculadora);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        display = new QLineEdit(centralwidget);
        display->setObjectName(QString::fromUtf8("display"));
        display->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(display->sizePolicy().hasHeightForWidth());
        display->setSizePolicy(sizePolicy1);
        display->setFont(font);
        display->setCursor(QCursor(Qt::ArrowCursor));
        display->setInputMethodHints(Qt::InputMethodHint::ImhDigitsOnly);
        display->setMaxLength(17);
        display->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        display->setReadOnly(true);
        display->setCursorMoveStyle(Qt::CursorMoveStyle::LogicalMoveStyle);
        display->setClearButtonEnabled(false);

        gridLayout->addWidget(display, 0, 0, 1, 1);

        botones = new QFrame(centralwidget);
        botones->setObjectName(QString::fromUtf8("botones"));
        botones->setFrameShape(QFrame::Shape::StyledPanel);
        botones->setFrameShadow(QFrame::Shadow::Raised);
        cero = new QPushButton(botones);
        cero->setObjectName(QString::fromUtf8("cero"));
        cero->setGeometry(QRect(10, 170, 91, 41));
        punto = new QPushButton(botones);
        punto->setObjectName(QString::fromUtf8("punto"));
        punto->setGeometry(QRect(110, 170, 81, 41));
        uno = new QPushButton(botones);
        uno->setObjectName(QString::fromUtf8("uno"));
        uno->setGeometry(QRect(10, 130, 57, 31));
        dos = new QPushButton(botones);
        dos->setObjectName(QString::fromUtf8("dos"));
        dos->setGeometry(QRect(73, 130, 57, 31));
        tres = new QPushButton(botones);
        tres->setObjectName(QString::fromUtf8("tres"));
        tres->setGeometry(QRect(136, 130, 57, 31));
        cuatro = new QPushButton(botones);
        cuatro->setObjectName(QString::fromUtf8("cuatro"));
        cuatro->setGeometry(QRect(10, 90, 57, 31));
        cinco = new QPushButton(botones);
        cinco->setObjectName(QString::fromUtf8("cinco"));
        cinco->setGeometry(QRect(73, 90, 57, 31));
        seis = new QPushButton(botones);
        seis->setObjectName(QString::fromUtf8("seis"));
        seis->setGeometry(QRect(136, 90, 57, 31));
        siete = new QPushButton(botones);
        siete->setObjectName(QString::fromUtf8("siete"));
        siete->setGeometry(QRect(10, 50, 57, 31));
        ocho = new QPushButton(botones);
        ocho->setObjectName(QString::fromUtf8("ocho"));
        ocho->setGeometry(QRect(73, 50, 57, 31));
        nueve = new QPushButton(botones);
        nueve->setObjectName(QString::fromUtf8("nueve"));
        nueve->setGeometry(QRect(136, 50, 57, 31));
        sum = new QPushButton(botones);
        sum->setObjectName(QString::fromUtf8("sum"));
        sum->setGeometry(QRect(200, 50, 57, 31));
        rest = new QPushButton(botones);
        rest->setObjectName(QString::fromUtf8("rest"));
        rest->setGeometry(QRect(200, 10, 57, 31));
        mult = new QPushButton(botones);
        mult->setObjectName(QString::fromUtf8("mult"));
        mult->setGeometry(QRect(138, 10, 57, 31));
        div = new QPushButton(botones);
        div->setObjectName(QString::fromUtf8("div"));
        div->setGeometry(QRect(73, 10, 57, 31));
        del = new QPushButton(botones);
        del->setObjectName(QString::fromUtf8("del"));
        del->setGeometry(QRect(10, 10, 57, 31));
        igual = new QPushButton(botones);
        igual->setObjectName(QString::fromUtf8("igual"));
        igual->setGeometry(QRect(200, 90, 61, 121));

        gridLayout->addWidget(botones, 1, 0, 1, 1);

        Calculadora->setCentralWidget(centralwidget);

        retranslateUi(Calculadora);

        QMetaObject::connectSlotsByName(Calculadora);
    } // setupUi

    void retranslateUi(QMainWindow *Calculadora)
    {
        Calculadora->setWindowTitle(QCoreApplication::translate("Calculadora", "Calculadora", nullptr));
        cero->setText(QCoreApplication::translate("Calculadora", "0", nullptr));
        punto->setText(QCoreApplication::translate("Calculadora", ".", nullptr));
        uno->setText(QCoreApplication::translate("Calculadora", "1", nullptr));
        dos->setText(QCoreApplication::translate("Calculadora", "2", nullptr));
        tres->setText(QCoreApplication::translate("Calculadora", "3", nullptr));
        cuatro->setText(QCoreApplication::translate("Calculadora", "4", nullptr));
        cinco->setText(QCoreApplication::translate("Calculadora", "5", nullptr));
        seis->setText(QCoreApplication::translate("Calculadora", "6", nullptr));
        siete->setText(QCoreApplication::translate("Calculadora", "7", nullptr));
        ocho->setText(QCoreApplication::translate("Calculadora", "8", nullptr));
        nueve->setText(QCoreApplication::translate("Calculadora", "9", nullptr));
        sum->setText(QCoreApplication::translate("Calculadora", "+", nullptr));
        rest->setText(QCoreApplication::translate("Calculadora", "-", nullptr));
        mult->setText(QCoreApplication::translate("Calculadora", "X", nullptr));
        div->setText(QCoreApplication::translate("Calculadora", "/", nullptr));
        del->setText(QCoreApplication::translate("Calculadora", "DEL", nullptr));
        igual->setText(QCoreApplication::translate("Calculadora", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculadora: public Ui_Calculadora {};
} // namespace Ui

QT_END_NAMESPACE
