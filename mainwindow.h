#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include <QtGui/QLineEdit>
#include <QtGui/QComboBox>
#include <QtGui/QCheckBox>
#include <QMessageBox>
#include <QList>
#include <QMap>
#include "curso.h"
#include "disciplina.h"
#include "turma.h"

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private slots:
    void on_salvarCurso_clicked();
    void on_salvarDisciplina_clicked();
    void on_selecionarCurso_clicked();
    void on_salvarTurma_clicked();

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QMap<QString, Curso*> cursos;
    Curso* currentCurso;
    QLineEdit* nomeCurso;
    QComboBox* cursoList;
    QLineEdit* nomeDisciplina;
    QLineEdit* idDisciplina;
    QLineEdit* serieDisciplina;
    QComboBox* disciplinaTurma;

    void updateSelect(Curso* c);
    void updateSelect(Disciplina* d);
    void updateGrid(Turma* t);
    Curso* getSelectedCurso();
    Disciplina* getSelectedDisciplina();
};

#endif // MAINWINDOW_H
