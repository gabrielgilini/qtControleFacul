#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    for(int i = 1, l = ui->tabWidget->count(); i < l; ++i)
    {
        ui->tabWidget->setTabEnabled(i, false);
    }

    QFile cfg("cfg.qcf");
    cfg.open(QIODevice::ReadWrite | QIODevice::Text);

    QTextStream io(&cfg);
    saveDir = io.readLine();

    if(saveDir.isEmpty())
    {
        saveDir = QFileDialog::getExistingDirectory(this, "Selecione o diretório para salvar");
        io << saveDir;
    }
    cfg.close();
//    loadData();

}

MainWindow::~MainWindow()
{
//    saveData();
    delete ui;
}

void
MainWindow::loadData()
{
    if(!saveDir.isEmpty())
    {
        QFile cursosFile(saveDir + "/cursos.qcf");
        cursosFile.open(QIODevice::ReadOnly);
        QDataStream inCursos(&cursosFile);
        QMap<QString, QVariant> cur;
        inCursos >> cur;
//        QFile alunosFile(saveDir + "/alunos.qcf");
//        alunosFile.open(QIODevice::ReadOnly);
//        QDataStream inAlunos(&alunosFile);
//        inAlunos >> alunos;

        syncUi();
    }
}

void
MainWindow::saveData()
{
    if(!saveDir.isEmpty())
    {
        QMap<QString, QVariant> cur;
        QVariant tmp;
        QMap<QString, Curso*>::const_iterator i = cursos.constBegin();
        while(i != cursos.constEnd())
        {
            tmp = QVariant::fromValue(*i.value());
            qDebug() << tmp;
            cur.insert(i.key(), tmp);
            ++i;
        }

        QFile cursosFile(saveDir + "/cursos.qcf");
        cursosFile.setPermissions(QFile::ReadOwner | QFile::ReadGroup | QFile::ReadUser | QFile::WriteOwner | QFile::WriteGroup);
        cursosFile.open(QIODevice::WriteOnly);

        if(cursosFile.isWritable())
        {
            QDataStream inCursos(&cursosFile);
            inCursos << cur;
        }
        else
        {
            QMessageBox::warning(this, "Erro ao salvar arquivo", cursosFile.fileName().append(cursosFile.errorString()));
        }

//        QFile alunosFile(saveDir + "/alunos.qcf");
//        alunosFile.setPermissions(QFile::ReadOwner | QFile::ReadGroup | QFile::ReadUser | QFile::WriteOwner | QFile::WriteGroup);
//        alunosFile.open(QIODevice::WriteOnly);
//        if(alunosFile.isWritable())
//        {
//            QDataStream inAlunos(&alunosFile);
//            inAlunos << alunos;
//        }
//        else
//        {
//            QMessageBox::warning(this, "Erro ao salvar arquivo", alunosFile.fileName().append(alunosFile.errorString()));
//        }
    }
}

void
MainWindow::syncUi()
{

}

void
MainWindow::on_salvarCurso_clicked()
{
    if(ui->nomeCurso->text() != "")
    {
        Curso* c = new Curso(ui->nomeCurso->text());
        cursos.insert(ui->nomeCurso->text(), c);
        QMessageBox::information(this, "Novo Curso", QString("Curso \"").append(ui->nomeCurso->text()).append("\" adicionado com sucesso."));
        updateSelect(c);
        ui->nomeCurso->clear();
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
MainWindow::on_removerCurso_clicked()
{
    Curso* tmp;
    if((tmp = getSelectedCurso()) && QMessageBox::question(ui->selectDisciplina, "Deletar curso", QString("Tem certeza que deseja deletar \"" + tmp->getNome() + "\"?"), QMessageBox::Yes | QMessageBox::No))
    {
        cursos.remove(tmp->getNome());
        ui->cursoList->removeItem(ui->cursoList->currentIndex());
        delete tmp;
    }
}

void
MainWindow::on_salvarDisciplina_clicked()
{
    if(ui->idDisciplina->text() != "" && ui->nomeDisciplina ->text() != "" && ui->serieDisciplina->text() != "")
    {
        Disciplina* d;
        ui->tabWidget->setTabEnabled(2, true);
        if(currentCurso->disciplinaExists(ui->nomeDisciplina->text()))
        {
            d = currentCurso->getDisciplinaByNome(ui->nomeDisciplina->text());
        }
        else
        {
            d = new Disciplina(ui->idDisciplina->text(), currentCurso, ui->nomeDisciplina ->text(), ui->serieDisciplina->text().toUShort());
            currentCurso->addDisciplina(d, d->getNome());
        }

        QMessageBox::information(this, "Nova Disciplina", QString("Disciplina \"").append(ui->nomeDisciplina ->text()).append("\" adicionada\nao curso \"").append(currentCurso->getNome()).append("\" com sucesso."));
        clearDisciplina();
        updateSelect(d);
    }
}

void
MainWindow::on_editarDisciplina_clicked()
{
    QString nome;
    if(!((nome = ui->selectDisciplina->currentText()).isEmpty()))
    {
        Disciplina* d = currentCurso->getDisciplinaByNome(nome);
        editDisciplina(d);
    }
}

void
MainWindow::on_cancelarDisciplina_clicked()
{
    clearDisciplina();
}

void
MainWindow::on_removerDisciplina_clicked()
{

    QString nome = ui->selectDisciplina->itemText(ui->selectDisciplina->currentIndex());
    if(QMessageBox::question(ui->selectDisciplina, "Deletar disciplina", QString("Tem certeza que deseja deletar \"" + nome + "\"?"), QMessageBox::Yes | QMessageBox::No) == QMessageBox::Yes)
    {
        currentCurso->delDisciplinaByNome(nome);
        ui->selectDisciplina->removeItem(ui->selectDisciplina->currentIndex());
        ui->disciplinaTurma->removeItem(ui->disciplinaTurma->findText(nome));
        clearDisciplina();
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
        updateGridAndSelect(t);
    }
}

void
MainWindow::on_salvarAluno_clicked()
{
    if(validatePessoa() && validateAluno())
    {
        if(alunos.contains(ui->nomePessoa->text()))
        {
            saveAluno(alunos.value(ui->nomePessoa->text()), true);
        }
        else
        {
            saveAluno(new Aluno(ui->matriculaAluno->text(), ui->nomePessoa->text(), ui->cpfPessoa->text(), ui->nascimentoPessoa->text(), ui->admissaoPessoa->text().toUInt()));
        }
    }
    else
    {
        QMessageBox::warning(this, "Novo Aluno", "Preencha os campos obrigatórios marcados com um asterisco.");
    }
}



void
MainWindow::on_cancelarAluno_clicked()
{
    clearAluno();
}

void
MainWindow::on_removerAluno_clicked()
{
    removeAluno(ui->nomePessoa->text());
}

void
MainWindow::on_alunosList_itemClicked()
{
    editAluno(alunos.value(ui->alunosList->currentItem()->text()));
}

void
MainWindow::clearAluno()
{
    ui->matriculaAluno->clear();
    ui->nomePessoa->clear();
    ui->cpfPessoa->clear();
    ui->nascimentoPessoa->setDate(ui->nascimentoPessoa->maximumDate());
    ui->admissaoPessoa->clear();
    ui->emailPessoa->clear();
    ui->telefonePessoa->clear();
    ui->enderecoPessoa->clear();
    for(int i = turmaBoxes.count(); --i >= 0;)
    {
        turmaBoxes[i]->setChecked(false);
    }
}

void
MainWindow::clearDisciplina()
{
    ui->idDisciplina->clear();
    ui->nomeDisciplina ->clear();
    ui->serieDisciplina->clear();
}

void
MainWindow::editDisciplina(Disciplina* d)
{
    ui->nomeDisciplina->setText(d->getNome());
    ui->idDisciplina->setText(d->getId());
    ui->serieDisciplina->setText(QString::number(d->getSerie()));
}

void
MainWindow::removeAluno(QString nome)
{
    if(alunos.contains(nome))
    {
        delete alunos.value(nome);
        alunos.remove(nome);
        delete ui->alunosList->takeItem(ui->alunosList->row(ui->alunosList->currentItem()));
        clearAluno();
        QMessageBox::information(this, "Remover Aluno", QString("Aluno \"").append(nome).append("\" removido com sucesso."));
    }
}

void
MainWindow::saveAluno(Aluno* a, bool edit)
{
    QCheckBox* qc;
    Turma* t;
    a->clearTurmas();
    for(int i = turmaBoxes.count(); --i >= 0 && (qc = turmaBoxes[i]);)
    {
        if(qc->isChecked())
        {
            t = getCheckedTurma(qc->text());
            if(t)
            {
                a->addTurma(t->getId(), t);
            }
            qc->setChecked(false);
        }
    }

    a->setEmail(ui->emailPessoa->text());
    a->setEndereco(ui->enderecoPessoa->toPlainText());
    a->setTelefone(ui->telefonePessoa->text());

    if(!edit)
    {
        ui->alunosList->addItem(a->getNome());
        alunos.insert(a->getNome(), a);
    }
    clearAluno();

    QString newEdit = (edit) ? "editado" : "inserido";
    QMessageBox::information(this, "Salvar Aluno", QString("Aluno \"").append(a->getNome()).append("\" ").append(newEdit).append(" com sucesso."));
}

void
MainWindow::editAluno(Aluno* a)
{
    ui->matriculaAluno->setText(a->getNumMatricula());
    ui->nomePessoa->setText(a->getNome());
    ui->cpfPessoa->setText(a->getCpf());
    ui->nascimentoPessoa->setDate(QDate::fromString(a->getDataNascimento(), "d/M/yy"));
    ui->admissaoPessoa->setText(QString::number(a->getAnoAdmissao()));
    ui->emailPessoa->setText(a->getEmail());
    ui->telefonePessoa->setText(a->getTelefone());
    ui->enderecoPessoa->setPlainText(a->getEndereco());
    for(int i = turmaBoxes.count(); --i >= 0;)
    {
        if(a->isInTurma(turmaBoxes[i]->text().toUInt()))
        {
            turmaBoxes[i]->setChecked(true);
        }
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
    if(ui->cursoList->count() > 0)
    {
        QString key = ui->cursoList->itemText(ui->cursoList->currentIndex());
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
    ui->cursoList->addItem(c->getNome());
}

void
MainWindow::updateSelect(Disciplina* d)
{
    ui->selectDisciplina->addItem(d->getNome());
    ui->disciplinaTurma->addItem(d->getNome());
}

void
MainWindow::updateGridAndSelect(Turma* t)
{
    QString label(t->getIdString());
    label.append(" - ").append(t->getDisciplinaNome());
    QCheckBox* qc = new QCheckBox(label, this);
    turmaBoxes.append(qc);
    ui->turmasGrid->addWidget(qc);
    ui->selectTurmas->addItem(label);
}
