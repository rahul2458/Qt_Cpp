/********************************************************************************
** Form generated from reading UI file 'Error_info_view.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERROR_INFO_VIEW_H
#define UI_ERROR_INFO_VIEW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Error_info_view
{
public:
    QFrame *frame;
    QFrame *Bg_error_info_Window;
    QFrame *frame_2;
    QPushButton *minmize_btn;
    QPushButton *setting_btn;
    QLabel *win_ico_lab;
    QLabel *Error_info_lb;
    QLabel *error_info_msg_lb;
    QPushButton *pushButton_3;

    void setupUi(QDialog *Error_info_view)
    {
        if (Error_info_view->objectName().isEmpty())
            Error_info_view->setObjectName(QString::fromUtf8("Error_info_view"));
        Error_info_view->resize(410, 110);
        Error_info_view->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(Error_info_view);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 410, 110));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(202, 81, 0);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        Bg_error_info_Window = new QFrame(frame);
        Bg_error_info_Window->setObjectName(QString::fromUtf8("Bg_error_info_Window"));
        Bg_error_info_Window->setGeometry(QRect(1, 1, 408, 108));
        Bg_error_info_Window->setStyleSheet(QString::fromUtf8("background-color: rgb(30, 30, 30);"));
        Bg_error_info_Window->setFrameShape(QFrame::StyledPanel);
        Bg_error_info_Window->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(Bg_error_info_Window);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(1, 1, 408, 36));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 50, 50);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        minmize_btn = new QPushButton(frame_2);
        minmize_btn->setObjectName(QString::fromUtf8("minmize_btn"));
        minmize_btn->setGeometry(QRect(484, 4, 35, 30));
        minmize_btn->setStyleSheet(QString::fromUtf8("QPushButton:hover\n"
"{\n"
"   \n"
"color: #b1b1b1;\n"
"    background-color:  #3C3C3C;\n"
"    border-color: #1e1e1e;\n"
"    border-style: solid;\n"
"    padding: 3px;\n"
"\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ico/images/icons8_subtract_50px.png"), QSize(), QIcon::Normal, QIcon::Off);
        minmize_btn->setIcon(icon);
        minmize_btn->setIconSize(QSize(30, 30));
        minmize_btn->setCheckable(false);
        minmize_btn->setFlat(true);
        setting_btn = new QPushButton(frame_2);
        setting_btn->setObjectName(QString::fromUtf8("setting_btn"));
        setting_btn->setGeometry(QRect(440, 4, 35, 30));
        setting_btn->setStyleSheet(QString::fromUtf8("QPushButton:hover\n"
"{\n"
"   \n"
"color: #b1b1b1;\n"
"    background-color:  #3C3C3C;\n"
"    border-color: #1e1e1e;\n"
"    border-style: solid;\n"
"    padding: 3px;\n"
"\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ico/images/icons8_settings_30px.png"), QSize(), QIcon::Normal, QIcon::Off);
        setting_btn->setIcon(icon1);
        setting_btn->setIconSize(QSize(30, 30));
        setting_btn->setFlat(true);
        win_ico_lab = new QLabel(frame_2);
        win_ico_lab->setObjectName(QString::fromUtf8("win_ico_lab"));
        win_ico_lab->setGeometry(QRect(4, 0, 40, 36));
        win_ico_lab->setPixmap(QPixmap(QString::fromUtf8(":/ico/images/icons8_error_30px.ico")));
        win_ico_lab->setScaledContents(true);
        Error_info_lb = new QLabel(frame_2);
        Error_info_lb->setObjectName(QString::fromUtf8("Error_info_lb"));
        Error_info_lb->setGeometry(QRect(56, 6, 191, 26));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setPointSize(14);
        font.setBold(true);
        Error_info_lb->setFont(font);
        Error_info_lb->setStyleSheet(QString::fromUtf8("color: rgb(91, 91, 95);"));
        error_info_msg_lb = new QLabel(Bg_error_info_Window);
        error_info_msg_lb->setObjectName(QString::fromUtf8("error_info_msg_lb"));
        error_info_msg_lb->setGeometry(QRect(8, 55, 331, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font1.setPointSize(10);
        error_info_msg_lb->setFont(font1);
        error_info_msg_lb->setStyleSheet(QString::fromUtf8("color: rgb(114, 118, 125);"));
        pushButton_3 = new QPushButton(Bg_error_info_Window);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(364, 70, 35, 30));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton:hover\n"
"{\n"
"   \n"
"color: #b1b1b1;\n"
"    background-color:  #242424;\n"
"    border-color: #1e1e1e;\n"
"    border-style: solid;\n"
"    padding: 5px;\n"
"\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/ico/images/icons8_ok_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(30, 30));
        pushButton_3->setFlat(true);

        retranslateUi(Error_info_view);

        QMetaObject::connectSlotsByName(Error_info_view);
    } // setupUi

    void retranslateUi(QDialog *Error_info_view)
    {
        Error_info_view->setWindowTitle(QCoreApplication::translate("Error_info_view", "Dialog", nullptr));
        minmize_btn->setText(QString());
        setting_btn->setText(QString());
        win_ico_lab->setText(QString());
        Error_info_lb->setText(QString());
        error_info_msg_lb->setText(QString());
        pushButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Error_info_view: public Ui_Error_info_view {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERROR_INFO_VIEW_H
