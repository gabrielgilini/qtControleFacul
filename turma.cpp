#include "turma.h"

Turma::Turma(unsigned int id, Disciplina* d)
{
    this->disciplina = d;
    this->id = id;
}

void Turma::addAluno(Aluno* a, QString nome)
{
    this->alunos[nome] = a;
}

QMap<QString, Aluno*> Turma::getAlunos()
{
    return this->alunos;
}

unsigned int Turma::getId()
{
    return this->id;
}

QString Turma::getIdString()
{
    return QString::number(this->id);
}

QString Turma::getDisciplinaNome()
{
    return this->disciplina->getNome();
}
