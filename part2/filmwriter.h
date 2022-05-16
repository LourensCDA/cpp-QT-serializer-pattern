#ifndef FILMWRITER_H
#define FILMWRITER_H
#include "film.h"

class FilmWriter
{
public:
    FilmWriter();

    bool write2File(Film *f) const;

};

#endif // FILMWRITER_H
