#include "aluno.h"

Aluno::Aluno(QString n, QString nome, QString cpf, QString dn, unsigned int aa) : Pessoa(nome, cpf, dn, aa)
{
    this->numMatricula = n;
}

void Aluno::addTurma(unsigned int id, Turma* t)
{
    this->turmas[id] = t;
}

QString Aluno::getNumMatricula()
{
    return this->numMatricula;
}

void Aluno::clearTurmas()
{
    this->turmas.clear();
}

bool Aluno::isInTurma(unsigned int id)
{
    return this->turmas.contains(id);
}
