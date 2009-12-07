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
    std::stringstream ss;
    ss << this->id;
    return QString(ss.str().c_str());
}
