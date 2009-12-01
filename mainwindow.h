#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include <QtGui/QLineEdit>
#include <QtGui/QComboBox>
#include <QList>
#include "curso.h"

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private slots:
    void on_salvarCursoButton_clicked();

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QList<Curso*> cursos;
    QLineEdit* nomeCurso;
    QComboBox* cursoDisciplina;
    void updateSelect(Curso* c, int index);
};

#endif // MAINWINDOW_H
