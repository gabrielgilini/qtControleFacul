#ifndef TURMA_H
#define TURMA_H
#include "disciplina.h"

class Aluno;

class Disciplina;

class Turma
{
private:
    Disciplina* disciplina;
    unsigned int id;
    QMap<QString, Aluno*> alunos;
public:
    Turma(unsigned int id, Disciplina* d);
    void addAluno(Aluno* a, QString nome);
    QMap<QString, Aluno*> getAlunos();
    unsigned int getId();
    QString getIdString();
    QString getDisciplinaNome();
};

#endif // TURMA_H
