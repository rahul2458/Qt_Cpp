#ifndef ERROR_INFO_VIEW_H
#define ERROR_INFO_VIEW_H

#include <QDialog>
#include "Messgae_pass.h"

namespace Ui {
class Error_info_view;
}

class Error_info_view : public QDialog
{
    Q_OBJECT

public:
    explicit Error_info_view(QWidget *parent = nullptr);
    ~Error_info_view();

private slots:
    void on_pushButton_3_clicked();


private:
    Ui::Error_info_view *ui;

    Messgae_pass messagepass;
};

#endif // ERROR_INFO_VIEW_H
