#ifndef FILMINPUT_H
#define FILMINPUT_H

#include "film.h"
#include "filmwriter.h"

#include <QMainWindow>
#include <QMessageBox>
#include <QPushButton>
#include <QFormLayout>
#include <QLabel>
#include <QLineEdit>
#include <QSpinBox>
#include <QDateEdit>
#include <QDate>
#include <QAbstractButton>

class FilmInput : public QMainWindow
{
     Q_OBJECT
public:
    FilmInput();

private slots:
    void save2file_process();

private:
    QLineEdit *edtTitle;
    QSpinBox *edtDuration;
    QLineEdit *edtDirector;
    QDateEdit *edtRelease;
    QPushButton *btnSave;
};

#endif // FILMINPUT_H
