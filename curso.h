#ifndef CURSO_H
#define CURSO_H
#include <QString>
#include <QList>
#include <QMap>
#include "disciplina.h"

class Disciplina;

class Turma;

class Curso
{
public:
    Curso();
    Curso(QString nome);
    QString getNome();
    void setNome(QString nome);
    void addDisciplina(Disciplina* d, QString nome);
    QMap<QString, Disciplina*> getDisciplinas();
    Turma* getTurmaById(unsigned int id);
    void delDisciplinaByNome(QString nome);
    Disciplina* getDisciplinaByNome(QString nome);
    bool disciplinaExists(QString nome);

private:
    QString nome;
    QMap<QString, Disciplina*> disciplinas;
};
#endif // CURSO_H
