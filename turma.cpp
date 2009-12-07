#include "turma.h"

void Turma::addAluno(Aluno* a)
{
    this->alunos.append(a);
}

QList<Aluno*> Turma::getAlunos()
{
    return this->alunos;
}

unsigned int Turma::getId()
{
    return this->id;
}

void Turma::setId(unsigned int id)
{
    this->id = id;
}
