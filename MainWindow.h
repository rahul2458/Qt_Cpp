
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
#include "Messgae_pass.h"
#include "DataFile.h"
#include <QCompleter>
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    //Qtimer function
    void timeStart();

private slots:
    void on_minmize_btn_clicked();
    void on_auto_check_box_clicked(bool checked);
    void on_pushButton_3_clicked();
    void on_error_search_lineEdit_textEdited(const QString &arg1);

    // Language selction mode
    void LoadLanguage(bool);
    void Cpu();


    void on_lang_selection_com_currentIndexChanged(int index);

    void on_setting_btn_clicked();

private:
    Ui::MainWindow *ui;

    //for window move
    QPoint m_dragPosition;
    bool m_dragging;
    Messgae_pass messagepass;
    QCompleter *completer;


    // QWidget interface
protected:
    void mouseMoveEvent(QMouseEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;


public:
    DataFile files;
    QStringList listData;


};

#endif // MAINWINDOW_H
