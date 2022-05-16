#ifndef FILMWRITER_H
#define FILMWRITER_H
#include "film.h"

class FilmWriter
{
public:
    FilmWriter();
    FilmWriter(Film f);

    void setFilm(Film f);
    bool write2File() const;

private:
    Film film;
};

#endif // FILMWRITER_H
