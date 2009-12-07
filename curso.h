#ifndef CURSO_H
#define CURSO_H
#include <QString>
#include <QList>
#include <QMap>

class Disciplina;

class Curso
{
public:
    Curso(QString nome);
    QString getNome();
    void setNome(QString nome);
    void addDisciplina(Disciplina* d, QString nome);
    QMap<QString, Disciplina*> getDisciplinas();

private:
    QString nome;
    QMap<QString, Disciplina*> disciplinas;
};

#endif // CURSO_H
