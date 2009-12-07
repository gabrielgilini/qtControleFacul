#ifndef ALUNO_H
#define ALUNO_H
#include "pessoa.h"
#include <QMap>

class Turma;

class Boletim;

class Aluno : public Pessoa
{
private:
    unsigned long int numMatricula;
    QMap<unsigned int, Turma*> turmas;
    QMap<unsigned int, Boletim*> boletins;
public:
    Aluno(unsigned long int n, QString nome, QString cpf, QString dn, unsigned int aa);
    void addTurma(unsigned int id, Turma* t);
    //void setNota();
};

#endif // ALUNO_H
