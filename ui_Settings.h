/********************************************************************************
** Form generated from reading UI file 'Settings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QFrame *frame;
    QFrame *frame_2;
    QCheckBox *listViewShow;
    QCheckBox *completerCheck;
    QFrame *frame_3;
    QLabel *win_ico_lab;
    QLabel *win_title_lab;
    QPushButton *setting_btn;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QString::fromUtf8("Settings"));
        Settings->resize(400, 116);
        Settings->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(Settings);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 400, 116));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(1, 1, 398, 114));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(30, 30, 30);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        listViewShow = new QCheckBox(frame_2);
        listViewShow->setObjectName(QString::fromUtf8("listViewShow"));
        listViewShow->setGeometry(QRect(10, 84, 199, 24));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setPointSize(10);
        listViewShow->setFont(font);
        listViewShow->setStyleSheet(QString::fromUtf8(""));
        completerCheck = new QCheckBox(frame_2);
        completerCheck->setObjectName(QString::fromUtf8("completerCheck"));
        completerCheck->setGeometry(QRect(10, 50, 199, 24));
        completerCheck->setFont(font);
        completerCheck->setStyleSheet(QString::fromUtf8(""));
        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 401, 36));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 50, 50);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        win_ico_lab = new QLabel(frame_3);
        win_ico_lab->setObjectName(QString::fromUtf8("win_ico_lab"));
        win_ico_lab->setGeometry(QRect(4, 4, 27, 27));
        win_ico_lab->setTextFormat(Qt::PlainText);
        win_ico_lab->setPixmap(QPixmap(QString::fromUtf8(":/ico/images/icons8_settings_30px.png")));
        win_ico_lab->setScaledContents(true);
        win_ico_lab->setOpenExternalLinks(false);
        win_title_lab = new QLabel(frame_3);
        win_title_lab->setObjectName(QString::fromUtf8("win_title_lab"));
        win_title_lab->setGeometry(QRect(37, 5, 191, 26));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font1.setPointSize(14);
        font1.setBold(true);
        win_title_lab->setFont(font1);
        win_title_lab->setStyleSheet(QString::fromUtf8("color: rgb(91, 91, 95);"));
        setting_btn = new QPushButton(frame_3);
        setting_btn->setObjectName(QString::fromUtf8("setting_btn"));
        setting_btn->setGeometry(QRect(357, 4, 35, 30));
        setting_btn->setStyleSheet(QString::fromUtf8("QPushButton:hover\n"
"{\n"
"   \n"
"color: #b1b1b1;\n"
"    background-color:  #3C3C3C;\n"
"    border-color: #1e1e1e;\n"
"    border-style: solid;\n"
"\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ico/images/icons8_Close_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        setting_btn->setIcon(icon);
        setting_btn->setIconSize(QSize(30, 30));
        setting_btn->setFlat(true);

        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QCoreApplication::translate("Settings", "Dialog", nullptr));
        listViewShow->setText(QCoreApplication::translate("Settings", "Show list view model", nullptr));
        completerCheck->setText(QCoreApplication::translate("Settings", "Auto completer", nullptr));
        win_ico_lab->setText(QString());
        win_title_lab->setText(QCoreApplication::translate("Settings", "SETTINGS", nullptr));
        setting_btn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
