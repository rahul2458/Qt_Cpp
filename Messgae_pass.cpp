
#include "Messgae_pass.h"
#include "Error_info_view.h"
#include <QDebug>
#include <QDesktopWidget>

void Messgae_pass::setMessage(const QString& title, const QString& info, int code)
{
    this->message_title = title;
    this->message_info = info;
    this->message_code = code;

    // Handle the received date and set the data
    // ...
    Error_info_view error_info_view;
    error_info_view.setWindowFlags(Qt::FramelessWindowHint);

    //MainWindow window;

    //error_info_view.setWindowModality(Qt::WindowModal);
    //error_info_view.setParent(&window);  // Set the parent window for the dialog

    //QPoint parentCenter = window.geometry().center();
    //QPoint dialogPosition = parentCenter - QPoint(error_info_view.width() / 2, error_info_view.height() / 2);
    //error_info_view.move(dialogPosition);

    error_info_view.exec();  // Show the dialog

}

bool Messgae_pass::getLast_color() const
{
    return last_color;
}

void Messgae_pass::setLast_color(bool newLast_color)
{
    last_color = newLast_color;
}

bool Messgae_pass::getAuto_completer() const
{
    return auto_completer;
}

void Messgae_pass::setAuto_completer(bool newAuto_completer)
{
    auto_completer = newAuto_completer;
}

bool Messgae_pass::getShow_list() const
{
    return show_list;
}

void Messgae_pass::setShow_list(bool newShow_list)
{
    show_list = newShow_list;
}

int Messgae_pass::getLanguage() const
{
    return language;
}

void Messgae_pass::setLanguage(int newLanguage)
{
    language = newLanguage;
}


QString Messgae_pass::getMessage() const {
    return message_title;
}

QString Messgae_pass::getMsgInfo() const
{
    return message_info;
}

int Messgae_pass::getCode()
{
    return message_code;
}
