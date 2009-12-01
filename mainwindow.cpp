#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    nomeCurso = new QLineEdit;
    nomeCurso = ui->nomeCurso;

    cursoDisciplina = new QComboBox;
    cursoDisciplina = ui->cursoDisciplina;
}

MainWindow::~MainWindow()
{
    delete nomeCurso;
    delete cursoDisciplina;
    delete ui;
}

void
MainWindow::on_salvarCursoButton_clicked()
{
    cursos.append(new Curso(nomeCurso->text()));
    QMessageBox::information(this, "Novo Curso", QString("Curso \"").append(nomeCurso->text()).append("\" adicionado com sucesso."));
    nomeCurso->clear();
    this->updateSelect(cursos.last(), cursos.size() - 1);
}

void
MainWindow::updateSelect(Curso* c, int index)
{
    cursoDisciplina->addItem(c->getNome(), index);
}
