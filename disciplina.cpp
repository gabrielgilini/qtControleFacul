#include "disciplina.h"

Disciplina::Disciplina(QString id, Curso* curso, QString nome, unsigned short int serie)
{
    this->id = id;
    this->curso = curso;
    this->nome = nome;
    this->serie = serie;
}

QString Disciplina::getId()
{
    return id;
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

void Disciplina::addTurma(Turma* t, unsigned int id)
{
    this->turmas.insert(id, t);
}

QMap<unsigned int, Turma*> Disciplina::getTurmas()
{
    return this->turmas;
}

Turma* Disciplina::getTurmaById(unsigned int id)
{
    if(this->turmas.contains(id))
    {
        return this->turmas.value(id);
    }
    return NULL;
}

unsigned short int Disciplina::getSerie()
{
    return this->serie;
}
