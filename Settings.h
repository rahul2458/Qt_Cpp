#ifndef SETTINGS_H
#define SETTINGS_H

#include <QDialog>
#include "Messgae_pass.h"

namespace Ui {
class Settings;
}

class Settings : public QDialog
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = nullptr);
    ~Settings();

private slots:
    void on_setting_btn_clicked();


    void on_completerCheck_clicked(bool checked);

    void on_listViewShow_clicked(bool checked);
    void LoadLanguage(bool);

private:
    Ui::Settings *ui;
    Messgae_pass msg;

};

#endif // SETTINGS_H
