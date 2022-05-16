#include "filmwriter.h"
#include <QFile>
#include <QTextStream>

FilmWriter::FilmWriter(){}

FilmWriter::FilmWriter(Film f): film(f){}

void FilmWriter::setFilm(Film f)
{
    film = f;
};

// write class varialble to text file pipe used as seperator
bool FilmWriter::write2File() const
{
    QFile filmFile("filmFile.txt");
    if (!filmFile.open(QIODevice::Append))
        return false;

    QTextStream outputToFile(&filmFile);

    outputToFile << "Title: " << film.getTitle() << "|";
    outputToFile << "Length: " << film.getLength() << "|";
    outputToFile << "Director: " << film.getDirector() << "|";
    outputToFile << "Release Date: " << film.getRelease().toString("yyyy-MM-dd") << '\n';
    filmFile.close();

    return true;
};
