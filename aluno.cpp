#include "aluno.h"

Aluno::Aluno(unsigned long int n, QString nome, QString cpf, QString dn, unsigned int aa) : Pessoa(nome, cpf, dn, aa)
{
    this->numMatricula = n;
}

void Aluno::addTurma(unsigned int id, Turma* t)
{
    this->turmas[id] = t;
}
