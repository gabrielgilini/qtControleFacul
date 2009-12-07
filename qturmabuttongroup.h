#ifndef QTURMABUTTONGROUP_H
#define QTURMABUTTONGROUP_H

#include <QButtonGroup>
#include "disciplina.h"

class QTurmaButtonGroup : public QButtonGroup
{
public:
    QTurmaButtonGroup(Disciplina* d, QObject* parent = 0);
    Disciplina* getDisciplina();
private:
    Disciplina* d;
};

#endif // QTURMABUTTONGROUP_H
