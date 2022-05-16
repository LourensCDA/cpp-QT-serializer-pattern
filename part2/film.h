#ifndef FILM_H
#define FILM_H

#include <QObject>
#include <QDate>

class Film : public QObject
{
Q_OBJECT
    Q_PROPERTY(QString title READ getTitle WRITE setTitle)
    Q_PROPERTY(int length READ getLength WRITE setLength)
    Q_PROPERTY(QString director READ getDirector WRITE setDirector)
    Q_PROPERTY(QDate releaseDate READ getRelease WRITE setRelease)
public:
    Film();
    Film(QString t, int len, QString dir, QDate rd);

private:
    // setters
    void setTitle(QString t);
    void setLength(int len);
    void setDirector(QString dir);
    void setRelease(QDate rd);

    // getters
    QString getTitle() const;
    int getLength() const;
    QString getDirector() const;
    QDate getRelease() const;


    QString title;
    int length;
    QString director;
    QDate releaseDate;
};

#endif // FILM_H
