/********************************************************************************
** Form generated from reading UI file 'form1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
************************************************************************/

#ifndef UI_FORM1_H
#define UI_FORM1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form1
{
public:
    QAction *actionakcja;
    QDial *dial;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *Form1)
    {
        if (Form1->objectName().isEmpty())
            Form1->setObjectName(QString::fromUtf8("Form1"));
        Form1->resize(400, 273);
        actionakcja = new QAction(Form1);
        actionakcja->setObjectName(QString::fromUtf8("actionakcja"));
        actionakcja->setCheckable(true);
        dial = new QDial(Form1);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setGeometry(QRect(50, 50, 71, 61));
        label_2 = new QLabel(Form1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 110, 169, 26));
        label_3 = new QLabel(Form1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(280, 70, 169, 42));
        label = new QLabel(Form1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 170, 169, 90));
        pushButton = new QPushButton(Form1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 40, 169, 23));

        retranslateUi(Form1);
        QObject::connect(pushButton, SIGNAL(clicked()), actionakcja, SLOT(trigger()));

        QMetaObject::connectSlotsByName(Form1);
    } // setupUi

    void retranslateUi(QWidget *Form1)
    {
        Form1->setWindowTitle(QApplication::translate("Form1", "Form", nullptr));
        actionakcja->setText(QApplication::translate("Form1", "akcja", nullptr));
#ifndef QT_NO_TOOLTIP
        actionakcja->setToolTip(QApplication::translate("Form1", "<html><head/><body><p>rich text</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("Form1", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("Form1", "TextLabel", nullptr));
        label->setText(QApplication::translate("Form1", "TextLabel", nullptr));
        pushButton->setText(QApplication::translate("Form1", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form1: public Ui_Form1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM1_H
