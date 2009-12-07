    #ifndef DISCIPLINA_H
    #define DISCIPLINA_H
    #include <QString>
    #include <QMap>
    #include "curso.h"
    #include "turma.h"

    class Curso;

    class Turma;

    class Disciplina
    {
    private:
        unsigned short int serie;
        QString id;
        QString nome;
        Curso* curso;
        QMap<unsigned int, Turma*> turmas;
    public:
        Disciplina(QString id, Curso* curso, QString nome, unsigned short int serie);

        QString getId();
        const Curso getCurso();
        QString getNome();
        void setNome(QString nome);
        void addTurma(Turma* t, unsigned int id);
        QMap<unsigned int, Turma*> getTurmas();
        Turma* getTurmaById(unsigned int id);
    };

    #endif // DISCIPLINA_H
