#include "curso.h"

Curso::Curso()
{
}

Curso::Curso(QString nome)
{
    this->nome = nome;
}

QString Curso::getNome()
{
    return this->nome;
}

void Curso::setNome(QString nome)
{
    this->nome = nome;
}

void Curso::addDisciplina(Disciplina* d, QString nome)
{
    this->disciplinas.insert(nome, d);
}

QMap<QString, Disciplina*> Curso::getDisciplinas()
{
    return this->disciplinas;
}

Turma* Curso::getTurmaById(unsigned int id)
{
    Turma* t;
    foreach(Disciplina* d, this->disciplinas)
    {
        if((t = d->getTurmaById(id)))
        {
            return t;
        }
    }
    return NULL;
}
