/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Tue Dec 8 22:48:05 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      37,   11,   11,   11, 0x08,
      67,   11,   11,   11, 0x08,
      96,   11,   11,   11, 0x08,
     121,   11,   11,   11, 0x08,
     146,   11,   11,   11, 0x08,
     174,   11,   11,   11, 0x08,
     201,   11,   11,   11, 0x08,
     227,   11,   11,   11, 0x08,
     253,   11,   11,   11, 0x08,
     285,   11,   11,   11, 0x08,
     316,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_salvarCurso_clicked()\0"
    "on_salvarDisciplina_clicked()\0"
    "on_selecionarCurso_clicked()\0"
    "on_salvarTurma_clicked()\0"
    "on_salvarAluno_clicked()\0"
    "on_alunosList_itemClicked()\0"
    "on_cancelarAluno_clicked()\0"
    "on_removerAluno_clicked()\0"
    "on_removerCurso_clicked()\0"
    "on_cancelarDisciplina_clicked()\0"
    "on_removerDisciplina_clicked()\0"
    "on_editarDisciplina_clicked()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

const QMetaObject *MainWindow::metaObject() const
{
    return &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_salvarCurso_clicked(); break;
        case 1: on_salvarDisciplina_clicked(); break;
        case 2: on_selecionarCurso_clicked(); break;
        case 3: on_salvarTurma_clicked(); break;
        case 4: on_salvarAluno_clicked(); break;
        case 5: on_alunosList_itemClicked(); break;
        case 6: on_cancelarAluno_clicked(); break;
        case 7: on_removerAluno_clicked(); break;
        case 8: on_removerCurso_clicked(); break;
        case 9: on_cancelarDisciplina_clicked(); break;
        case 10: on_removerDisciplina_clicked(); break;
        case 11: on_editarDisciplina_clicked(); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
