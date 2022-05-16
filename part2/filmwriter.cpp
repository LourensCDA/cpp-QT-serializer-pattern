#include "filmwriter.h"
#include <QFile>
#include <QTextStream>
#include <QMetaObject>
#include <QMetaProperty>

FilmWriter::FilmWriter(){}


// write class varialble to text file pipe used as seperator
bool FilmWriter::write2File(Film *f) const
{
    QFile filmFile("filmFile.txt");
    if (!filmFile.open(QIODevice::Append))
        return false;

    QTextStream outputToFile(&filmFile);

    const QMetaObject *metaObj = f->metaObject();
    QString str_val;

    for (int count=metaObj->propertyOffset(); count<metaObj->propertyCount(); count++)
    {
        const QMetaProperty prop = metaObj->property(count);
        QString name = prop.name();
        QVariant value = prop.read(f);
        QString val = value.toString();
        str_val += QString(name + ": " + val + "| ");
    }
    // remove the last "| " and leading and trailing white spaces.
    str_val = str_val.left(str_val.length()-2).trimmed();
    outputToFile << str_val << '\n';
    filmFile.close();

    return true;
};
