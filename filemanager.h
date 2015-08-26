#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <QFile>
#include <QDebug>
#include <student.h>
#include <QDir>
class FileManager
{
public:
    FileManager();
    QList<Student*> readIds();
    void changeStatus(QString name);
    void addUser(QString name, QString id);
private:
};

#endif // FILEMANAGER_H
