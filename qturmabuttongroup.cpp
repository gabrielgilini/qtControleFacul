#include "qturmabuttongroup.h"

QTurmaButtonGroup::QTurmaButtonGroup(Disciplina* _d, QObject* parent) : QButtonGroup(parent), d(_d)
{
    this->setExclusive(false);
}
