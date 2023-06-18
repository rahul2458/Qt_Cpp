#include "Settings.h"
#include "ui_Settings.h"
#include "Messgae_pass.h"

Settings::Settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);

    //load color
    QString autoMode = "QCheckBox::indicator:checked{image:url(:/ico/images/check1.png);}"
                       "QCheckBox{border-style: solid;border: 1px solid #1e1e1e;border-radius: 2;color: rgb(114, 118, 125);}"
                       "QCheckBox::indicator{border: 1px solid #5B5B5B;width: 20px;height: 20px;}";

    QString manualMode = "QCheckBox::indicator:checked{image:url(:/ico/images/check2.png);}"
                        "QCheckBox{border-style: solid;border: 1px solid #1e1e1e;border-radius: 2;color: rgb(114, 118, 125);}"
                        "QCheckBox::indicator{border: 1px solid #5B5B5B;width: 20px;height: 20px;}";
    if(msg.getInstance().getLast_color() == true)
    {
        ui->frame->setStyleSheet("background-color: rgb(202, 81, 0);");
        ui->completerCheck->setStyleSheet(autoMode);
        ui->listViewShow->setStyleSheet(autoMode);

    }
    else
    {
        ui->frame->setStyleSheet("background-color:rgb(0,122,204);");
        ui->completerCheck->setStyleSheet(manualMode);
        ui->listViewShow->setStyleSheet(manualMode);
    }

    //Load
    LoadLanguage(msg.getInstance().getLanguage());
    ui->completerCheck->setChecked(msg.getInstance().getAuto_completer());
    ui->listViewShow->setChecked(msg.getInstance().getShow_list());


}

Settings::~Settings()
{
    delete ui;
}

void Settings::on_setting_btn_clicked()
{
    this->close();
}


void Settings::on_completerCheck_clicked(bool checked)
{
    msg.getInstance().setAuto_completer(checked);
//    if(ui->completerCheck->isChecked())
//    {
//        msg.getInstance().setAuto_completer(checked);
//    }
//    else if(!ui->completerCheck->isChecked())
//    {
//        msg.getInstance().setAuto_completer(checked);
//    }
}


void Settings::on_listViewShow_clicked(bool checked)
{
    msg.getInstance().setShow_list(checked);
}

void Settings::LoadLanguage(bool IsChinese = false)
{
    QString labelText = IsChinese ? "环境" : "SETTINGS";
    ui->win_title_lab->setText((labelText));

    QString combo1 = IsChinese ? "自动补全" : "Auto completer";
    ui->completerCheck->setText(combo1);

    QString combo2 = IsChinese ? "显示列表视图模型" : "Show list view model";
    ui->listViewShow->setText(combo2);
}

