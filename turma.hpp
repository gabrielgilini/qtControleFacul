#ifndef TURMA_H_
#define TURMA_H_
#include <string>
#include <list>

class Turma
{
private:
    Curso* curso;
    Disciplina* disciplina;
    unsigned int id;
    std::list <Aluno*> alunos;
public:
    Turma();
    void setAluno();
    void getAlunos();
};

Turma::Turma()
{
}

void Turma::setAluno()
{
}

void Turma::getAlunos()
{
}

#endif
