#ifndef DISCIPLINA_H
#define DISCIPLINA_H
#include <QString>
#include "curso.h"

class Curso;

class Disciplina
{
private:
    unsigned short int serie;
    QString id;
    QString nome;
    Curso* curso;
public:
    Disciplina(QString id, Curso* curso, QString nome);
    QString getId();
    const Curso getCurso();
    QString getNome();
    void setNome(QString nome);
};

#endif // DISCIPLINA_H
