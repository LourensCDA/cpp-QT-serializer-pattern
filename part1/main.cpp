#include <QApplication>
#include "filminput.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    FilmInput w;

    // Event loop
    return app.exec();
}
