#ifndef CURSO_H
#define CURSO_H
#include <QString>

class Curso
{
public:
    Curso(QString nome);
    QString getNome();
    void setNome(QString nome);

private:
    QString nome;
};

#endif // CURSO_H
