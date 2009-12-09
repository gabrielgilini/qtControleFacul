#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDebug>
#include <QtGui/QMainWindow>
#include <QtGui/QLineEdit>
#include <QtGui/QComboBox>
#include <QtGui/QCheckBox>
#include <QtGui/QLayoutItem>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QList>
#include <QTextStream>
#include <QMap>
#include <QStack>
#include "qturmabuttongroup.h"
#include "curso.h"
#include "disciplina.h"
#include "turma.h"
#include "aluno.h"

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
    void on_salvarAluno_clicked();
    void on_alunosList_itemClicked();
    void on_cancelarAluno_clicked();
    void on_removerAluno_clicked();
    void on_removerCurso_clicked();
    void on_cancelarDisciplina_clicked();
    void on_removerDisciplina_clicked();
    void on_editarDisciplina_clicked();

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QMap<QString, Curso*> cursos;
    QMap<QString, Aluno*> alunos;
    Curso* currentCurso;
    QLineEdit* nomeCurso;
    QComboBox* cursoList;
    QLineEdit* nomeDisciplina;
    QLineEdit* idDisciplina;
    QLineEdit* serieDisciplina;
    QComboBox* disciplinaTurma;
    QList<QCheckBox*> turmaBoxes;

    QString saveDir;

    void saveData();
    void loadData();
    void syncUi();

    void updateSelect(Curso* c);
    void updateSelect(Disciplina* d);
    void updateGridAndSelect(Turma* t);

    Curso* getSelectedCurso();
    Disciplina* getSelectedDisciplina();
    Turma* getCheckedTurma(QString txt);

    void editAluno(Aluno* a);
    void saveAluno(Aluno* a, bool edit=false);
    void removeAluno(QString nome);
    void editDisciplina(Disciplina* d);

    void clearAluno();
    void clearDisciplina();

    bool validatePessoa();
    bool validateAluno();
};

Q_DECLARE_METATYPE(Curso);
Q_DECLARE_METATYPE(Disciplina);
Q_DECLARE_METATYPE(Aluno);

#endif // MAINWINDOW_H
