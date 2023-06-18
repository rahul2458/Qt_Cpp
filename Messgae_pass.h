#ifndef DATAHANDLER_H
#define DATAHANDLER_H

#include <QString>

class Messgae_pass
{

public:
    static Messgae_pass& getInstance() {
        static Messgae_pass instance;
        return instance;
    }

    // Getter
    QString getMessage() const;
    QString getMsgInfo() const;
    int getCode();


    // Setter
    void setMessage(const QString& title, const QString& info, int code);

    bool getLast_color() const;
    void setLast_color(bool newLast_color);

    bool getAuto_completer() const;
    void setAuto_completer(bool newAuto_completer);

    bool getShow_list() const;
    void setShow_list(bool newShow_list);


    int getLanguage() const;
    void setLanguage(int newLanguage);

private:
    QString message_title;
    QString message_info;
    int message_code;
    // color data
    bool last_color;
    //bool auto completer
    bool auto_completer;
    bool show_list;
    //Language selection
    int language;

};

#endif // DATAHANDLER_H
