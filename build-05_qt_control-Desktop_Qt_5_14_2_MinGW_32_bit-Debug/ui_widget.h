/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton;
    QToolButton *toolButton;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *rBtnMan;
    QRadioButton *rBtnWoman;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_3;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QCheckBox *cBox;
    QListWidget *listWidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(613, 521);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 20, 75, 23));
        toolButton = new QToolButton(Widget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(50, 50, 161, 71));
        toolButton->setAutoRaise(true);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 150, 55, 70));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        rBtnMan = new QRadioButton(groupBox);
        rBtnMan->setObjectName(QString::fromUtf8("rBtnMan"));

        verticalLayout->addWidget(rBtnMan);

        rBtnWoman = new QRadioButton(groupBox);
        rBtnWoman->setObjectName(QString::fromUtf8("rBtnWoman"));

        verticalLayout->addWidget(rBtnWoman);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(150, 150, 109, 70));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioButton_4 = new QRadioButton(groupBox_2);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        verticalLayout_2->addWidget(radioButton_4);

        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        verticalLayout_2->addWidget(radioButton_3);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(40, 250, 91, 114));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        checkBox_6 = new QCheckBox(groupBox_3);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));

        verticalLayout_3->addWidget(checkBox_6);

        checkBox_7 = new QCheckBox(groupBox_3);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));

        verticalLayout_3->addWidget(checkBox_7);

        checkBox_8 = new QCheckBox(groupBox_3);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));

        verticalLayout_3->addWidget(checkBox_8);

        cBox = new QCheckBox(groupBox_3);
        cBox->setObjectName(QString::fromUtf8("cBox"));
        cBox->setTristate(true);

        verticalLayout_3->addWidget(cBox);

        listWidget = new QListWidget(Widget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(310, 90, 256, 192));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\347\231\273\345\275\225", nullptr));
        toolButton->setText(QCoreApplication::translate("Widget", "\346\265\267\350\264\274", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\346\200\247\345\210\253", nullptr));
        rBtnMan->setText(QCoreApplication::translate("Widget", "\347\224\267", nullptr));
        rBtnWoman->setText(QCoreApplication::translate("Widget", "\345\245\263", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\345\251\232\345\220\246", nullptr));
        radioButton_4->setText(QCoreApplication::translate("Widget", "RadioButton", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Widget", "\345\267\262\345\251\232", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "\351\227\256\345\215\267\350\260\203\346\237\245", nullptr));
        checkBox_6->setText(QCoreApplication::translate("Widget", "\344\273\267\346\240\274\345\256\236\346\203\240", nullptr));
        checkBox_7->setText(QCoreApplication::translate("Widget", "\345\217\243\346\204\237\345\245\275", nullptr));
        checkBox_8->setText(QCoreApplication::translate("Widget", "\346\234\215\345\212\241\345\210\260\344\275\215", nullptr));
        cBox->setText(QCoreApplication::translate("Widget", "\350\200\201\346\235\277\345\250\230\345\245\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
