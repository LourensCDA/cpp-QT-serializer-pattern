#include "film.h"

Film::Film(){}

Film::Film(QString t, int len, QString dir, QDate rd): title(t), length(len), director(dir), releaseDate(rd){}

// setters
void Film::setTitle(QString t)
{
    title = t;
};

void Film::setLength(int len)
{
    length = len;
};

void Film::setDirector(QString dir)
{
    director = dir;
};

void Film::setRelease(QDate rd)
{
    releaseDate = rd;
};

// getters
QString Film::getTitle() const
{
    return title;
};

int Film::getLength() const
{
    return length;
};

QString Film::getDirector() const
{
    return director;
};

QDate Film::getRelease() const
{
    return releaseDate;
};
