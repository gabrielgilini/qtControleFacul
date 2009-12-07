#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    nomeCurso = new QLineEdit;
    nomeCurso = ui->nomeCurso;

    cursoList = new QComboBox;
    cursoList = ui->cursoList;

    nomeDisciplina = new QLineEdit;
    nomeDisciplina = ui->nomeDisciplina;

    idDisciplina = new QLineEdit;
    idDisciplina = ui->idDisciplina;

    serieDisciplina = new QLineEdit;
    serieDisciplina = ui->serieDisciplina;

    disciplinaTurma = new QComboBox;
    disciplinaTurma = ui->disciplinaTurma;

    for(int i = 1, l = ui->tabWidget->count(); i < l; ++i)
    {
        ui->tabWidget->setTabEnabled(i, false);
    }

}

MainWindow::~MainWindow()
{
    delete nomeCurso;
    delete cursoList;
    delete serieDisciplina;
    delete nomeDisciplina;
    delete idDisciplina;
    delete disciplinaTurma;
    delete ui;
}

void
MainWindow::on_salvarCurso_clicked()
{
    if(nomeCurso->text() != "")
    {
        Curso* c = new Curso(nomeCurso->text());
        cursos.insert(nomeCurso->text(), c);
        QMessageBox::information(this, "Novo Curso", QString("Curso \"").append(nomeCurso->text()).append("\" adicionado com sucesso."));
        updateSelect(c);
        nomeCurso->clear();
    }
}

void
MainWindow::on_selecionarCurso_clicked()
{
    if((currentCurso = getSelectedCurso()))
    {
        ui->tabWidget->setTabEnabled(1, true);
        statusBar()->addPermanentWidget(new QLabel(QString("Editando curso \"").append(currentCurso->getNome()).append("\"."), this));
    }
}

void
MainWindow::on_salvarDisciplina_clicked()
{
    if(idDisciplina->text() != "" && nomeDisciplina->text() != "" && serieDisciplina->text() != "")
    {
        ui->tabWidget->setTabEnabled(2, true);
        Disciplina* d = new Disciplina(idDisciplina->text(), currentCurso, nomeDisciplina->text(), serieDisciplina->text().toUShort());
        currentCurso->addDisciplina(d, d->getNome());
        QMessageBox::information(this, "Nova Disciplina", QString("Disciplina \"").append(nomeDisciplina->text()).append("\" adicionada\nao curso \"").append(currentCurso->getNome()).append("\" com sucesso."));
        idDisciplina->clear();
        nomeDisciplina->clear();
        serieDisciplina->clear();
        updateSelect(d);
    }
}

void
MainWindow::on_salvarTurma_clicked()
{
    Disciplina* d;
    Turma* t;
    unsigned int id = ui->idTurma->text().toUInt();

    if(ui->idTurma->text() != "" && ui->disciplinaTurma->count() > 0 && (d = getSelectedDisciplina()))
    {
        t = new Turma (id, d);
        d->addTurma(t, id);
        QMessageBox::information(this, "Nova Turma", QString("Turma \"").append(ui->idTurma->text()).append("\" adicionada\nà disiciplina \"").append(d->getNome()).append("\" com sucesso."));
        ui->idTurma->clear();
        updateGrid(t);
    }
}

void
MainWindow::on_salvarAluno_clicked()
{
    QCheckBox* qc;
    if(validatePessoa() && validateAluno())
    {
        Aluno* a = new Aluno(ui->matriculaAluno->text().toULong(), ui->nomePessoa->text(), ui->cpfPessoa->text(), ui->nascimentoPessoa->text(), ui->admissaoPessoa->text().toUInt());
        Turma* t;
        for(int i = turmaBoxes.count(); --i >= 0 && (qc = turmaBoxes[i]);)
        {
            if(qc->isChecked())
            {
                t = getCheckedTurma(qc->text());
                if(t)
                {
                    a->addTurma(t->getId(), t);
                }
            }
        }
    }
    else
    {
        QMessageBox::warning(this, "Novo Aluno", "Preencha os campos obrigatórios marcados com um asterisco.");
    }
}

bool
MainWindow::validatePessoa()
{
    return ui->nomePessoa->text() != "" && ui->cpfPessoa->text() != "" && ui->nascimentoPessoa->text() != "" && ui->admissaoPessoa->text() != "";
}

bool
MainWindow::validateAluno()
{
    return ui->matriculaAluno->text() != "";
}

Turma*
MainWindow::getCheckedTurma(QString txt)
{
    return currentCurso->getTurmaById(txt.toUInt());
}

Curso*
MainWindow::getSelectedCurso()
{
    if(cursoList->count() > 0)
    {
        QString key = cursoList->itemText(cursoList->currentIndex());
        if(cursos.contains(key))
            return cursos.value(key);
    }
    return NULL;
}

Disciplina*
MainWindow::getSelectedDisciplina()
{
    if(ui->disciplinaTurma->count() > 0 && currentCurso)
    {
        QMap<QString, Disciplina*>* qm = &currentCurso->getDisciplinas();
        QString key = ui->disciplinaTurma->itemText(ui->disciplinaTurma->currentIndex());

        if(qm->contains(key))
        {
            return qm->value(key);
        }
    }
    return NULL;
}

void
MainWindow::updateSelect(Curso* c)
{
    cursoList->addItem(c->getNome());
}

void
MainWindow::updateSelect(Disciplina* d)
{
    disciplinaTurma->addItem(d->getNome());
}

void
MainWindow::updateGrid(Turma* t)
{
    QCheckBox* qc = new QCheckBox(t->getIdString(), this);
    turmaBoxes.append(qc);
    ui->turmasGrid->addWidget(qc);
}
