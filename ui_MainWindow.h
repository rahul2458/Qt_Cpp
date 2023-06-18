/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *Bg_window;
    QFrame *frame;
    QPushButton *minmize_btn;
    QPushButton *setting_btn;
    QLabel *win_ico_lab;
    QLabel *win_title_lab;
    QLineEdit *error_search_lineEdit;
    QPushButton *pushButton_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QCheckBox *auto_check_box;
    QComboBox *lang_selection_com;
    QListWidget *error_list_view;
    QFrame *frame_2;
    QLabel *label_3;
    QLabel *real_time_lab;
    QLabel *version_lab;
    QLabel *notification_lb;
    QFrame *circularProgressGPU;
    QFrame *circularContainer_2;
    QLabel *labelPercentageCPU;
    QLabel *labelAplicationName_2;
    QLabel *labelCredits_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(524, 175);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ico/images/icons8_error_30px.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(201, 80, 0);\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QMenuBar::item\n"
"{\n"
"    background: transparent;\n"
"}\n"
"\n"
"QMenuBar::item:selected\n"
"{\n"
"    background: transparent;\n"
"    border: 1px solid #ffaa00;\n"
"}\n"
"\n"
"QMenuBar::item:pressed\n"
"{\n"
"    background: #444;\n"
"    border: 1px solid #000;\n"
"    background-color: QLinearGradient(\n"
"        x1:0, y1:0,\n"
"        x2:0, y2:1,\n"
"        stop:1 #212121,\n"
"        stop:0.4 #343434/*,\n"
"        stop:0.2 #343434,\n"
"        stop:0.1 #ffaa00*/\n"
"    );\n"
"    margin-bottom:-1px;\n"
"    padding-bottom:1px;\n"
"}\n"
"\n"
"QMenu\n"
"{\n"
"    border: 1px solid #000;\n"
"}\n"
"\n"
"QMenu::item\n"
"{\n"
"    padding: 2px 20px 2px 20px;\n"
"}\n"
"\n"
"QMenu::item:selected\n"
"{\n"
"    color: #000000;\n"
"}\n"
"\n"
"QWidget:disabled\n"
"{\n"
"    color: #808080;\n"
"    background-color: #323232;\n"
"}\n"
"\n"
"QAbstractItemView\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0,"
                        " y2: 1, stop: 0 #4d4d4d, stop: 0.1 #646464, stop: 1 #5d5d5d);\n"
"}\n"
"\n"
"QWidget:focus\n"
"{\n"
"    /*border: 1px solid darkgray;*/\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"QComboBox\n"
"{\n"
"    selection-background-color: #ffaa00;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;\n"
"}\n"
"\n"
"QComboBox:hover,QPushButton:hover\n"
"{\n"
"    border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"\n"
"QComboBox:on\n"
"{\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"    selection-background-color: #ffaa00;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView\n"
"{\n"
"    border: 2px solid darkgray"
                        ";\n"
"    selection-background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: top right;\n"
"     width: 15px;\n"
"\n"
"     border-left-width: 0px;\n"
"     border-left-color: darkgray;\n"
"     border-left-style: solid; /* just a single line */\n"
"     border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"     border-bottom-right-radius: 3px;\n"
" }\n"
"\n"
"QComboBox::down-arrow\n"
"{\n"
"     image: url(:/newPrefix/ico/combo_box icon.png);\n"
"	\n"
"}\n"
"\n"
"QGroupBox\n"
"{\n"
"    border: 1px solid darkgray;\n"
"    margin-top: 10px;\n"
"}\n"
"\n"
"QGroupBox:focus\n"
"{\n"
"    border: 1px solid darkgray;\n"
"}\n"
"\n"
"QTextEdit:focus\n"
"{\n"
"    border: 1px solid darkgray;\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"     border: 1px solid #222222;\n"
"     background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0.0 #121212, stop: 0"
                        ".2 #282828, stop: 1 #484848);\n"
"     height: 7px;\n"
"     margin: 0px 16px 0 16px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 0.5 #d7801a, stop: 1 #ffa02f);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal {\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      width: 14px;\n"
"      subcontrol-position: right;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      width: 14px;\n"
"     subcontrol-position: left;\n"
"     subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::right-arrow:horizontal, QScrollBar::left-arrow:horizo"
                        "ntal\n"
"{\n"
"      border: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal\n"
"{\n"
"      background: none;\n"
"}\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0.0 #121212, stop: 0.2 #282828, stop: 1 #484848);\n"
"      width: 7px;\n"
"      margin: 16px 0 16px 0;\n"
"      border: 1px solid #222222;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 0.5 #d7801a, stop: 1 #ffa02f);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      height: 14px;\n"
"      subcontrol-position: bottom;\n"
"      subcontrol-ori"
                        "gin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #d7801a, stop: 1 #ffa02f);\n"
"      height: 14px;\n"
"      subcontrol-position: top;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical\n"
"{\n"
"      border: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical\n"
"{\n"
"      background: none;\n"
"}\n"
"\n"
"QTextEdit\n"
"{\n"
"    background-color: #242424;\n"
"}\n"
"\n"
"QPlainTextEdit\n"
"{\n"
"    background-color: #242424;\n"
"}\n"
"\n"
"QHeaderView::section\n"
"{\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #616161, stop: 0.5 #505050, stop: 0.6 #434343, stop:1 #656565);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px so"
                        "lid #6c6c6c;\n"
"}\n"
"\n"
"QCheckBox:disabled\n"
"{\n"
"color: #414141;\n"
"}\n"
"\n"
"QDockWidget::title\n"
"{\n"
"    text-align: center;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"}\n"
"\n"
"QDockWidget::close-button, QDockWidget::float-button\n"
"{\n"
"    text-align: center;\n"
"    spacing: 1px; /* spacing between items in the tool bar */\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"}\n"
"\n"
"QDockWidget::close-button:hover, QDockWidget::float-button:hover\n"
"{\n"
"    background: #242424;\n"
"}\n"
"\n"
"QDockWidget::close-button:pressed, QDockWidget::float-button:pressed\n"
"{\n"
"    padding: 1px -1px -1px 1px;\n"
"}\n"
"\n"
"QMainWindow::separator\n"
"{\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #161616, stop: 0.5 #151515, stop: 0.6 #212121, stop:1 #3"
                        "43434);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #4c4c4c;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"}\n"
"\n"
"QMainWindow::separator:hover\n"
"{\n"
"\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #d7801a, stop:0.5 #b56c17 stop:1 #ffa02f);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"}\n"
"\n"
"QToolBar::handle\n"
"{\n"
"     spacing: 3px; /* spacing between items in the tool bar */\n"
"     background: url(:/dark_orange/img/handle.png);\n"
"}\n"
"\n"
"QMenu::separator\n"
"{\n"
"    height: 2px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #161616, stop: 0.5 #151515, stop: 0.6 #212121, stop:1 #343434);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    margin-left: 10px;\n"
"    margin-right: 5px;\n"
"}\n"
"\n"
"QProgressBar\n"
"{\n"
"    border: 2px solid grey;\n"
"    border-radiu"
                        "s: 5px;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chunk\n"
"{\n"
"    background-color: #d7801a;\n"
"    width: 2.15px;\n"
"    margin: 0.5px;\n"
"}\n"
"\n"
"\n"
"QRadioButton::indicator:checked, QRadioButton::indicator:unchecked{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"    border: 1px solid #b1b1b1;\n"
"    border-radius: 8px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked\n"
"{\n"
"    background-color: qradialgradient(\n"
"        cx: 0.5, cy: 0.5,\n"
"        fx: 0.5, fy: 0.5,\n"
"        radius: 1.0,\n"
"        stop: 0.27 #ffaa00,\n"
"        stop: 0.35 #323232\n"
"    );\n"
"}\n"
"\n"
"\n"
"\n"
"QRadioButton::indicator\n"
"{\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QRadioButton::indicator:hover, QCheckBox::indicator:hover\n"
"{\n"
"    border: 1px solid #ffaa00;\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:disabled, QRadioButton::indicator:disabled\n"
"{\n"
"    border: 1px solid #444;\n"
"}\n"
"\n"
"\n"
"QSlider::groove:horizontal {\n"
"    border: 1px solid #3A3939;"
                        "\n"
"    height: 8px;\n"
"    background: #201F1F;\n"
"    margin: 2px 0;\n"
"    border-radius: 2px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1,\n"
"      stop: 0.0 silver, stop: 0.2 #a8a8a8, stop: 1 #727272);\n"
"    border: 1px solid #3A3939;\n"
"    width: 14px;\n"
"    height: 14px;\n"
"    margin: -4px 0;\n"
"    border-radius: 2px;\n"
"}\n"
"\n"
"QSlider::groove:vertical {\n"
"    border: 1px solid #3A3939;\n"
"    width: 8px;\n"
"    background: #201F1F;\n"
"    margin: 0 0px;\n"
"    border-radius: 2px;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"    background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0.0 silver,\n"
"      stop: 0.2 #a8a8a8, stop: 1 #727272);\n"
"    border: 1px solid #3A3939;\n"
"    width: 14px;\n"
"    height: 14px;\n"
"    margin: 0 -4px;\n"
"    border-radius: 2px;\n"
"}\n"
"\n"
"QAbstractSpinBox {\n"
"    padding-top: 2px;\n"
"    padding-bottom: 2px;\n"
"    border: 1px solid darkgray;\n"
"\n"
"    bo"
                        "rder-radius: 2px;\n"
"    min-width: 50px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"     width: 20px;\n"
"     height: 20px;\n"
"	 \n"
" }\n"
"\n"
"\n"
"\n"
"QRadioButton::indicator {\n"
"     width: 15px;\n"
"     height: 15px;\n"
" }\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Bg_window = new QFrame(centralwidget);
        Bg_window->setObjectName(QString::fromUtf8("Bg_window"));
        Bg_window->setGeometry(QRect(1, 1, 522, 173));
        Bg_window->setStyleSheet(QString::fromUtf8("background-color: rgb(30, 30, 30);\n"
"\n"
""));
        Bg_window->setFrameShape(QFrame::StyledPanel);
        Bg_window->setFrameShadow(QFrame::Raised);
        frame = new QFrame(Bg_window);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 525, 36));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 50, 50);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        minmize_btn = new QPushButton(frame);
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
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ico/images/icons8_subtract_50px.png"), QSize(), QIcon::Normal, QIcon::Off);
        minmize_btn->setIcon(icon1);
        minmize_btn->setIconSize(QSize(30, 30));
        minmize_btn->setCheckable(false);
        minmize_btn->setFlat(true);
        setting_btn = new QPushButton(frame);
        setting_btn->setObjectName(QString::fromUtf8("setting_btn"));
        setting_btn->setGeometry(QRect(440, 4, 35, 30));
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
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/ico/images/icons8_settings_30px.png"), QSize(), QIcon::Normal, QIcon::Off);
        setting_btn->setIcon(icon2);
        setting_btn->setIconSize(QSize(30, 30));
        setting_btn->setFlat(true);
        win_ico_lab = new QLabel(frame);
        win_ico_lab->setObjectName(QString::fromUtf8("win_ico_lab"));
        win_ico_lab->setGeometry(QRect(4, 0, 40, 36));
        win_ico_lab->setPixmap(QPixmap(QString::fromUtf8(":/ico/images/icons8_error_30px.ico")));
        win_ico_lab->setScaledContents(true);
        win_title_lab = new QLabel(frame);
        win_title_lab->setObjectName(QString::fromUtf8("win_title_lab"));
        win_title_lab->setGeometry(QRect(56, 6, 371, 26));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setPointSize(14);
        font.setBold(true);
        win_title_lab->setFont(font);
        win_title_lab->setStyleSheet(QString::fromUtf8("color: rgb(91, 91, 95);"));
        error_search_lineEdit = new QLineEdit(Bg_window);
        error_search_lineEdit->setObjectName(QString::fromUtf8("error_search_lineEdit"));
        error_search_lineEdit->setGeometry(QRect(190, 50, 321, 24));
        error_search_lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
" background-color: transparent;\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 2;\n"
"	font: 10pt \"Microsoft YaHei\";\n"
"	border-color: rgb(114, 118, 125);\n"
"	color: rgb(114, 118, 125);\n"
"	border-top-color: transparent;\n"
"	border-bottom-color: transparent;\n"
"}"));
        pushButton_3 = new QPushButton(Bg_window);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 110, 35, 30));
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
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/ico/images/icons8_down_right_24px.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon3);
        pushButton_3->setIconSize(QSize(30, 30));
        pushButton_3->setFlat(true);
        layoutWidget = new QWidget(Bg_window);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 40, 139, 58));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        auto_check_box = new QCheckBox(layoutWidget);
        auto_check_box->setObjectName(QString::fromUtf8("auto_check_box"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font1.setPointSize(10);
        auto_check_box->setFont(font1);
        auto_check_box->setStyleSheet(QString::fromUtf8("QCheckBox::indicator:checked\n"
"{\n"
"    image:url(:/ico/images/check1.png);\n"
"}\n"
"QCheckBox{\n"
"\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 2;\n"
"	color: rgb(114, 118, 125);\n"
"}\n"
"QCheckBox::indicator{\n"
"    border: 1px solid #5B5B5B;\n"
"	width: 20px;\n"
"     height: 20px;\n"
"\n"
"}\n"
""));

        verticalLayout->addWidget(auto_check_box);

        lang_selection_com = new QComboBox(layoutWidget);
        lang_selection_com->addItem(QString());
        lang_selection_com->addItem(QString());
        lang_selection_com->setObjectName(QString::fromUtf8("lang_selection_com"));
        lang_selection_com->setEnabled(true);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(false);
        lang_selection_com->setFont(font2);
        lang_selection_com->setFocusPolicy(Qt::ClickFocus);
        lang_selection_com->setContextMenuPolicy(Qt::DefaultContextMenu);
        lang_selection_com->setAcceptDrops(false);
        lang_selection_com->setLayoutDirection(Qt::LeftToRight);
        lang_selection_com->setAutoFillBackground(false);
        lang_selection_com->setStyleSheet(QString::fromUtf8("\n"
"QComboBox\n"
"{\n"
"    selection-background-color: #ffaa00;\n"
"    background-color: transparent;\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 2;\n"
"	font: 10pt \"Microsoft YaHei\";\n"
"	border-color: rgb(114, 118, 125);\n"
"	color: rgb(114, 118, 125);\n"
"\n"
"}\n"
"\n"
""));
        lang_selection_com->setEditable(false);
        lang_selection_com->setInsertPolicy(QComboBox::InsertAtBottom);
        lang_selection_com->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);
        lang_selection_com->setDuplicatesEnabled(false);
        lang_selection_com->setFrame(true);

        verticalLayout->addWidget(lang_selection_com);

        error_list_view = new QListWidget(Bg_window);
        error_list_view->setObjectName(QString::fromUtf8("error_list_view"));
        error_list_view->setGeometry(QRect(190, 73, 321, 81));
        error_list_view->setFont(font2);
        error_list_view->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"	background-color: transparent;\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 2;\n"
"	font: 10pt \"Microsoft YaHei\";\n"
"	border-color: rgb(114, 118, 125);\n"
"	color: rgb(114, 118, 125);\n"
"	border-top-color: transparent;\n"
"	border-bottom-color: transparent;\n"
"}"));
        error_list_view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        error_list_view->setAutoScroll(true);
        frame_2 = new QFrame(Bg_window);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 150, 522, 25));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(202, 81, 0);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(3, 3, 32, 18));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(114, 118, 125);\n"
"color: rgb(255, 255, 255);"));
        real_time_lab = new QLabel(frame_2);
        real_time_lab->setObjectName(QString::fromUtf8("real_time_lab"));
        real_time_lab->setGeometry(QRect(39, 3, 91, 18));
        real_time_lab->setFont(font1);
        real_time_lab->setStyleSheet(QString::fromUtf8("color: rgb(114, 118, 125);\n"
"color: rgb(255, 255, 255);"));
        version_lab = new QLabel(frame_2);
        version_lab->setObjectName(QString::fromUtf8("version_lab"));
        version_lab->setGeometry(QRect(410, 3, 81, 16));
        version_lab->setFont(font1);
        version_lab->setStyleSheet(QString::fromUtf8("color: rgb(114, 118, 125);\n"
"color: rgb(255, 255, 255);"));
        notification_lb = new QLabel(frame_2);
        notification_lb->setObjectName(QString::fromUtf8("notification_lb"));
        notification_lb->setGeometry(QRect(493, 0, 25, 25));
        notification_lb->setPixmap(QPixmap(QString::fromUtf8(":/ico/images/notify.PNG")));
        circularProgressGPU = new QFrame(Bg_window);
        circularProgressGPU->setObjectName(QString::fromUtf8("circularProgressGPU"));
        circularProgressGPU->setGeometry(QRect(463, 98, 50, 50));
        circularProgressGPU->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	border-radius: 25px;	\n"
"	background-color: qconicalgradient(cx:0.5, cy:0.5, angle:90, stop:0.400 rgba(255, 85, 0, 255), stop:0.395 rgba(255, 255, 255, 0));\n"
"\n"
"}"));
        circularProgressGPU->setFrameShape(QFrame::StyledPanel);
        circularProgressGPU->setFrameShadow(QFrame::Raised);
        circularContainer_2 = new QFrame(circularProgressGPU);
        circularContainer_2->setObjectName(QString::fromUtf8("circularContainer_2"));
        circularContainer_2->setGeometry(QRect(2, 2, 46, 46));
        circularContainer_2->setBaseSize(QSize(0, 0));
        circularContainer_2->setStyleSheet(QString::fromUtf8("\n"
"QFrame{\n"
"	border-radius:23px;	\n"
"	background-color: rgb(30, 30, 30);\n"
"}"));
        circularContainer_2->setFrameShape(QFrame::StyledPanel);
        circularContainer_2->setFrameShadow(QFrame::Raised);
        labelPercentageCPU = new QLabel(circularContainer_2);
        labelPercentageCPU->setObjectName(QString::fromUtf8("labelPercentageCPU"));
        labelPercentageCPU->setGeometry(QRect(11, 16, 29, 15));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Roboto Thin"));
        font3.setPointSize(4);
        labelPercentageCPU->setFont(font3);
        labelPercentageCPU->setStyleSheet(QString::fromUtf8("color: rgb(202, 81, 0); padding: 0px; background-color: none;"));
        labelPercentageCPU->setAlignment(Qt::AlignCenter);
        labelPercentageCPU->setIndent(-1);
        labelAplicationName_2 = new QLabel(circularContainer_2);
        labelAplicationName_2->setObjectName(QString::fromUtf8("labelAplicationName_2"));
        labelAplicationName_2->setGeometry(QRect(12, -1, 20, 20));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Segoe UI"));
        font4.setPointSize(5);
        labelAplicationName_2->setFont(font4);
        labelAplicationName_2->setStyleSheet(QString::fromUtf8("color: #FFFFFF; background-color: none;"));
        labelAplicationName_2->setAlignment(Qt::AlignCenter);
        labelCredits_2 = new QLabel(circularContainer_2);
        labelCredits_2->setObjectName(QString::fromUtf8("labelCredits_2"));
        labelCredits_2->setGeometry(QRect(3, 25, 41, 20));
        labelCredits_2->setFont(font4);
        labelCredits_2->setStyleSheet(QString::fromUtf8("color: rgb(114, 118, 125); background-color: none;"));
        labelCredits_2->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "OCR", nullptr));
        minmize_btn->setText(QString());
        setting_btn->setText(QString());
        win_ico_lab->setText(QString());
        win_title_lab->setText(QCoreApplication::translate("MainWindow", "ERROR DETECTOR", nullptr));
        error_search_lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search error...", nullptr));
        pushButton_3->setText(QString());
        auto_check_box->setText(QCoreApplication::translate("MainWindow", "Auto detector", nullptr));
        lang_selection_com->setItemText(0, QCoreApplication::translate("MainWindow", "English", nullptr));
        lang_selection_com->setItemText(1, QCoreApplication::translate("MainWindow", "ChineseSimplified", nullptr));

        label_3->setText(QCoreApplication::translate("MainWindow", "Time:", nullptr));
        real_time_lab->setText(QCoreApplication::translate("MainWindow", "NA", nullptr));
        version_lab->setText(QCoreApplication::translate("MainWindow", "Version-0.03", nullptr));
        notification_lb->setText(QString());
        labelPercentageCPU->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">60</span><span style=\" font-size:10pt; vertical-align:super;\">%</span></p></body></html>", nullptr));
        labelAplicationName_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">GPU</span></p></body></html>", nullptr));
        labelCredits_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>TEMP: <span style=\" color:#ffffff;\">60\302\272</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
