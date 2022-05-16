#include "filminput.h"

FilmInput::FilmInput()
{
    // Form layout with fields
    QFormLayout *fLayout = new QFormLayout;

    // Title
    edtTitle = new QLineEdit();
    fLayout->addRow("Title: ", edtTitle);

    // Length
    edtDuration = new QSpinBox();
    edtDuration->setValue(60); // set default value
    edtDuration->setMaximum(360); // assumption no movie longer than 360 minutes (6 hours)
    fLayout->addRow("Duration: ", edtDuration);

    // Director
    edtDirector = new QLineEdit();
    fLayout->addRow("Director: ", edtDirector);

    // Release Date
    edtRelease = new QDateEdit();
    edtRelease->setDate(QDate::currentDate()); // set to today's date
    edtRelease->setDisplayFormat("yyyy-MM-dd"); // set display format to yyyy-MM-dd
    edtRelease->setCalendarPopup(true); // show date picker
    fLayout->addRow("Release Date: ", edtRelease);

    // vertical layout
    QHBoxLayout *hLayout = new QHBoxLayout;

    // button
    btnSave = new QPushButton("Save to File");
    hLayout->addWidget(btnSave);


    // Outer Layer
    QVBoxLayout *mainLayout = new QVBoxLayout;

    // Add the previous inner layout
    mainLayout->addLayout(fLayout);
    mainLayout->addLayout(hLayout);

    // Create a widget
    QWidget *w = new QWidget();

    // Set the outer layout as a main layout
    // of the widget
    w->setLayout(mainLayout);

    // Window title
    w->setWindowTitle("Films");

    // Display
    w->show();

    // signal slot to save input to text file
    connect(btnSave, SIGNAL(clicked()), this, SLOT(save2file_process()));
}

void FilmInput::save2file_process()
{
    QString title = edtTitle->text();
    int length = edtDuration->value();
    QString director = edtDirector->text();
    QDate releaseDate = edtRelease->date();

    Film *film = new Film(title, length, director, releaseDate);

    FilmWriter writer;

    if (writer.write2File(film))
    {
        QMessageBox::information(this, "Success", "Film detail saved to file.");

        // reset values
        edtTitle->clear();
        edtDuration->setValue(60);
        edtDirector->clear();
        edtRelease->setDate(QDate::currentDate());
    }
    else
    {
        QMessageBox::critical(this, "Failure", "Film detail NOT saved to file.");
    }

};
