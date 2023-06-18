#include "DataFile.h"
#include <QFile>
#include<QDir>
#include <QDebug>
#include <QTextStream>
#include <QStringList>

DataFile::DataFile(QObject *parent)
    : QObject{parent}
{

}

//Log save function
void DataFile::logSave(QString dateTime, QString messgae, int errorCode)
{
    try {
        QString filePath = QDir::current().filePath("log/" + fileName);
        if(QFileInfo::exists(filePath))
        {
            QFile file(filePath);
            if (file.open(QIODevice::Append | QIODevice::Text)){
                QTextStream stream(&file);
                stream << dateTime << " " << messgae  << " " << errorCode << Qt::endl;
                file.close();
                //qInfo() << "Log writen";
            }
        }
        else
        {
            fileFolderValidation(dateTime, messgae, errorCode);
        }

    } catch (...) {
    }
}


//Log files and folder check/validater function,if file or folder !exists then will creater
void DataFile::fileFolderValidation(QString dateTime, QString messgae, int errorCode)
{
    try
    {
        QString filePath = QDir::current().filePath("log/" + fileName);
        QFile file(filePath);

        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream stream(&file);
            stream << dateTime << " " << messgae  << " " << errorCode <<Qt::endl;
            // File created successfully
            qDebug() << "File created successfully.";
            file.close();
        }

    } catch (...) {

    }

}

QStringList DataFile::fileRead()
{
//    QStringList newItem;
//    QString filePath = QDir::current().filePath("errors/Error_data.ini");
//    if(QFileInfo::exists(filePath))
//    {
//        // Create a QFile object with the file path
//        QFile file(filePath);


//        // Open the file in read-only mode
//        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {

//            // Create a QTextStream to read the file
//            QTextStream in(&file);

//            // Read the file line by line
//            while (!in.atEnd()) {
//                QString line = in.readLine();
//                newItem << line;
//            }

//            // Close the file
//            file.close();
//        }
//        else
//        {
//            // Handle error if the file cannot be opened
//            qWarning() << "Failed to open the file:" << filePath;
//        }

//        //qInfo() << newItem.count() << "lines read from the file:" << filePath;

//        //return newItem;
//    }

//    else
//    {
//        qInfo() << "File & folder not found";
//    }

    // Create a QLineEdit for auto-completion
    QStringList completionList;
    QString filePath = QDir::current().filePath("errors/Error_data.ini");
    if (QFileInfo::exists(filePath)) {
        QFile file(filePath);

        // Open the file in read-only mode
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&file);

            // Read the file line by line and add items to the completion list
            while (!in.atEnd()) {
                QString line = in.readLine();
                completionList << line;
            }

            file.close();
        } else {
            qWarning() << "Failed to open the file:" << filePath;
        }
    } else {
        qInfo() << "File & folder not found";
    }
    return completionList;
}
