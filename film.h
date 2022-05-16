#ifndef FILM_H
#define FILM_H

#include <QWidget>
#include <QDate>

class Film
{
public:
    Film();
    Film(QString t, int len, QString dir, QDate rd);

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

private:
    QString title;
    int length;
    QString director;
    QDate releaseDate;
};

#endif // FILM_H
