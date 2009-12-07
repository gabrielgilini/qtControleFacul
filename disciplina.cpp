#include "disciplina.h"

Disciplina::Disciplina(QString id, Curso* curso, QString nome)
{
    this->id = id;
    this->curso = curso;
    this->nome = nome;
}

QString Disciplina::getId()
{
    return this->id;
}

const Curso Disciplina::getCurso()
{
    const Curso c(*this->curso);
    return c;
}

QString Disciplina::getNome()
{
    return this->nome;
}

void Disciplina::setNome(QString nome)
{
    this->nome = nome;
}
