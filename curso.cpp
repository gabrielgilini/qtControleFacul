#include "curso.h"

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
