
#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QDebug>
#include <QMouseEvent>
#include <QTimer>
#include <QTime>
#include "DataFile.h"
#include <QStringList>
#include <QListWidget>
#include <QCompleter>
#include "CPU/CpuDetails.h"
#include <QStringListModel>
#include "Settings.h"
#include "Custom/CustomListView.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Qtimer initilizing
    QTimer *timer = new QTimer;
    connect(timer, &QTimer::timeout, this, &MainWindow::timeStart);
    timer->start(1000);

    // Check box auto
    ui->auto_check_box->setChecked(true);
    messagepass.getInstance().setLast_color(true);
    //msg.setCheckBox(true);
    ui->error_list_view->hide();

    
    listData = files.fileRead();

    completer = new QCompleter;
    ui->error_search_lineEdit->setCompleter(completer);

    completer->setModel(new QStringListModel(listData,completer));

    // Set the style sheet for the QCompleter popup
    CustomListView* completerPopup = new CustomListView(this);
    completer->setPopup(completerPopup);
    if (completerPopup)
    {
        completerPopup->setStyleSheet("background-color: rgb(30, 30, 30); color: rgb(114, 118, 125);");
        QFont font = completerPopup->font();
        font.setPointSize(10);
        font.setFamily("Microsoft YaHei");
        completerPopup->setFont(font);
    }

    connect(ui->pushButton_3, &QPushButton::clicked, this, &MainWindow::Cpu);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timeStart()
{
    ui->real_time_lab->setText(QTime::currentTime().toString());
    //qInfo() << QTime::currentTime();
}


void MainWindow::on_minmize_btn_clicked()
{
    this->showMinimized();
}


void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if (ui->frame->geometry().contains(event->pos()))
    {
        m_dragging = true;
    }
    
    if (event->buttons() & Qt::LeftButton && m_dragging)
    {
        
        // Calculate the new position of the window based on the mouse movement
        QPoint newWindowPos = event->globalPos() - m_dragPosition;

        // Move the window to the new position
        move(newWindowPos);
    }
    else
    {
        event->ignore();
    }
}


void MainWindow::mousePressEvent(QMouseEvent *event)
{

    if (event->button() == Qt::LeftButton && ui->frame->geometry().contains(event->pos()))
    {
        // Save the initial position of the mouse click relative to the window
        m_dragPosition = event->globalPos() - frameGeometry().topLeft();
    }
    else
    {
        // If the mouse press event occurred outside the title label, ignore window movement
        m_dragging = false;
        event->ignore();

    }

}



void MainWindow::on_auto_check_box_clicked(bool checked)
{
    if(ui->auto_check_box->isChecked())
    {
        ui->error_list_view->hide();
        ui->centralwidget->setStyleSheet("background:rgb(202, 81, 0)");
        ui->frame_2->setStyleSheet("background:rgb(202, 81, 0)");
        ui->notification_lb->setPixmap(QPixmap(QString::fromUtf8(":/ico/images/notify.PNG")));

        // circular progress bar
        ui->circularProgressGPU->setStyleSheet("QFrame{border-radius: 25px;"
                                               "background-color: qconicalgradient(cx:0.5, cy:0.5, angle:90, stop:0.400 rgba(255, 85, 0, 255), stop:0.395 rgba(255, 255, 255, 0));}");
        ui->labelPercentageCPU->setStyleSheet("color: rgb(202, 81, 0)");
        //msg.setCheckBox(true);
        messagepass.getInstance().setLast_color(true);
    }
    else if(!ui->auto_check_box->isChecked())
    {
        ui->centralwidget->setStyleSheet("background:rgb(0,122,204)");
        ui->frame_2->setStyleSheet("background:rgb(0,122,204)");
        ui->notification_lb->setPixmap(QPixmap(QString::fromUtf8(":/ico/images/notify2.PNG")));

        // circular progress bar
        ui->circularProgressGPU->setStyleSheet("QFrame{border-radius: 25px;"
                                               "background-color: qconicalgradient(cx:0.5, cy:0.5, angle:90, stop:0.400 rgba(0,122,204, 255), stop:0.395 rgba(255, 255, 255, 0));}");
        ui->labelPercentageCPU->setStyleSheet("color: rgb(0, 122, 204)");
        //msg.setCheckBox(false);
        messagepass.getInstance().setLast_color(false);
    }
    ui->error_search_lineEdit->clear();
}


void MainWindow::on_pushButton_3_clicked()
{

    QString title = "Warining!";
    QString message = "Can't use right now! \n first please close it";
    //qInfo() << listData<< this;

    //msg.messgageShow(title, message);
    //qInfo() << msg.getInfo_title() << msg.getMessgae_info();
}


void MainWindow::on_error_search_lineEdit_textEdited(const QString &arg1)
{
    if(ui->auto_check_box->isChecked())
    {
        ui->error_search_lineEdit->clear();
        QString data = "Warning!";
        messagepass.getInstance().setMessage(data, "Can't search in auto mode!", 1);
        //qInfo() << messagepass.getdate() << "Frotm " ;
    }

    else if(messagepass.getInstance().getShow_list() == false)
    {
        ui->error_list_view->hide();
        return;

        //ui->error_list_view->show();

        //QAbstractItemModel* completionModel = completer->completionModel();
        //QStringList completions;


        //for (int i = 0; i < completionModel->rowCount(); ++i)
        //{
        //    QModelIndex index = completionModel->index(i, 0);
        //    QString completion = completionModel->data(index).toString();
        //    completions << completion;

        //    //qInfo() << "Completion:" << completion;
        //    ui->error_list_view->clear();

        //}
        //qInfo() << "Completion:" << completions;
        //ui->error_list_view->addItems(completions);

    }

    else if (messagepass.getInstance().getShow_list() == true)
    {
        ui->error_list_view->show();
        ui->error_list_view->clear();
        for each (QString list in listData)
        {
            qInfo() << list;
            ui->error_list_view->addItem(list);
        }

    }
}



void MainWindow::LoadLanguage(bool IsChinese = false)
{
    QString labelText = IsChinese ? "时间" : "Time:";
    ui->label_3->setText((labelText));

    QString labelTitle = IsChinese ? "错误检测器" : "ERROR DETECTOR";
    ui->win_title_lab->setText(labelTitle);

    QString checkbox = IsChinese ? "汽车检测仪" : "Auto detector";
    ui->auto_check_box->setText(checkbox);

    QString versionLab = IsChinese ? "版本-0.03" : "Version-0.03";
    ui->version_lab->setText(versionLab);

    QString lineEdit = IsChinese ? "搜索错误..." : "Search error...";
    ui->error_search_lineEdit->setPlaceholderText(lineEdit);
}

void MainWindow::Cpu()
{
    CpuDetails cpudetails;
    //qInfo() << cpudetails.getCpu_per();
    //qInfo() << cpudetails.getCpu_temp();

}

void MainWindow::on_lang_selection_com_currentIndexChanged(int index)
{
    LoadLanguage(index);
    messagepass.getInstance().setLanguage(index);
//    if(ui->lang_selection_com->currentIndex() == 0)
//    {
//        LoadLanguage(false);
//    }

//    else if(ui->lang_selection_com->currentIndex() == 1)
//    {
//        LoadLanguage(true);
//    }

}


void MainWindow::on_setting_btn_clicked()
{
    Settings settins;
    settins.setWindowFlags(Qt::FramelessWindowHint);
    settins.exec();

}

