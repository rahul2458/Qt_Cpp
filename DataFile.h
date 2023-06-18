#ifndef DATAFILE_H
#define DATAFILE_H


#include <QObject>
#include <QStringList>

class DataFile : public QObject
{
    Q_OBJECT
public:
    explicit DataFile(QObject *parent = nullptr);
    void logSave(QString dateTime, QString messgae, int errorCode);

    QStringList fileRead();


private:
    QString message;
    QString dateTime;
    QString fileName = "Log.ini";
    int errorCode;

    //Private function
    void fileFolderValidation(QString dateTime, QString messgae, int errorCode);

signals:

};


#endif // DATAFILE_H
