#ifndef TURMA_H
#define TURMA_H
#include "disciplina.h"

class Aluno;

class Turma
{
private:
    Disciplina* disciplina;
    unsigned int id;
    QList<Aluno*> alunos;
public:
    Turma();
    void addAluno(Aluno* a);
    QList<Aluno*> getAlunos();
    void setId(unsigned int id);
    unsigned int getId();
};

#endif // TURMA_H
