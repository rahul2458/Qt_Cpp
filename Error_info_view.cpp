#include "Error_info_view.h"
#include "ui_Error_info_view.h"
#include <QDebug>


//QT_BEGIN_NAMESPACE
//Messgae_pass messagepass;
//QT_END_NAMESPACE

Error_info_view::Error_info_view(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Error_info_view)
{
    ui->setupUi(this);

    QString msgTitle = messagepass.getInstance().getMessage();
    QString msgInfo = messagepass.getInstance().getMsgInfo();
    int code_value = messagepass.getInstance().getCode();
    ui->Error_info_lb->setText(msgTitle + " " + QString::number(code_value));
    ui->error_info_msg_lb->setText(msgInfo);

    //    ui->Error_info_lb->setText(messgae_pass.getInfo_title());
    //    ui->error_info_msg_lb->setText(messgae_pass.getMessgae_info());

    //    qInfo() << messgae_pass.getInfo_title() << messgae_pass.getMessgae_info();


    //    if(messagepass.getCheckBox())
    //    {
    //        ui->frame->setStyleSheet("background:rgb(202, 81, 0))");
    //        qInfo() << messagepass.getCheckBox() << "Form ture condition";
    //    }
    //    else if(!messagepass.getCheckBox())
    //    {
    //        ui->frame->setStyleSheet("background:rgb(0,122,204)");
    //        qInfo() << messagepass.getCheckBox() << "Form false condition";
    //    }
}


Error_info_view::~Error_info_view()
{
    delete ui;
}

void Error_info_view::on_pushButton_3_clicked()
{
    qInfo() << "This messgase form error class using get function data" << messagepass.getInstance().getMessage() <<messagepass.getInstance().getCode();
    this->close();
}



