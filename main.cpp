
#include "MainWindow.h"
 
#include <QApplication>
 
 
int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowFlag(Qt::FramelessWindowHint);
    w.show();
    return a.exec();

}



//#include <QApplication>
//#include <QWidget>
//#include <QLineEdit>
//#include <QCompleter>
//#include <QStringList>
//#include <QFile>
//#include <QTextStream>
//#include <QDir>
//#include <QFileInfo>
//#include <QDebug>
//#include <QVBoxLayout>
//
//int main(int argc, char *argv[])
//{
//    QApplication app(argc, argv);
//
//    QWidget window;
//    QVBoxLayout layout(&window);
//
//    // Create a QLineEdit for auto-completion
//    QLineEdit lineEdit;
//
//    // Read file contents into a QStringList
//    QStringList completionList;
//    QString filePath = QDir::current().filePath("errors/Error_data.ini");
//    if (QFileInfo::exists(filePath)) {
//        QFile file(filePath);
//        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
//            QTextStream in(&file);
//            while (!in.atEnd()) {
//                QString line = in.readLine();
//                completionList << line;
//            }
//            file.close();
//        } else {
//            qWarning() << "Failed to open the file:" << filePath;
//        }
//    } else {
//        qInfo() << "File & folder not found";
//    }
//
//    // Set up the completer with the completion list and connect it to the QLineEdit
//    QCompleter completer(completionList, &lineEdit);
//    completer.setCaseSensitivity(Qt::CaseInsensitive);
//    lineEdit.setCompleter(&completer);
//
//    layout.addWidget(&lineEdit);
//
//    window.setWindowTitle("Auto-Complete");
//    window.setGeometry(100, 100, 400, 200);
//
//    window.show();
//
//    return app.exec();
//}
