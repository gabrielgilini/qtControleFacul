/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Tue Dec 1 18:31:48 2009
**      by: Qt User Interface Compiler version 4.5.1
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSair;
    QAction *actionSelecionarCurso;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *nomeCurso;
    QPushButton *salvarCursoButton;
    QWidget *tab_2;
    QWidget *widget;
    QFormLayout *formLayout_3;
    QLabel *label_2;
    QLineEdit *nomeDisciplina;
    QLabel *label_3;
    QLineEdit *idDisciplina;
    QLabel *label_4;
    QLineEdit *serieDisciplina;
    QLabel *label_5;
    QComboBox *cursoDisciplina;
    QPushButton *salvarDisciplina;
    QMenuBar *menuBar;
    QMenu *menuTeste;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 400);
        actionSair = new QAction(MainWindow);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        actionSelecionarCurso = new QAction(MainWindow);
        actionSelecionarCurso->setObjectName(QString::fromUtf8("actionSelecionarCurso"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(110, 60, 401, 271));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        nomeCurso = new QLineEdit(tab);
        nomeCurso->setObjectName(QString::fromUtf8("nomeCurso"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nomeCurso);

        salvarCursoButton = new QPushButton(tab);
        salvarCursoButton->setObjectName(QString::fromUtf8("salvarCursoButton"));

        formLayout->setWidget(1, QFormLayout::FieldRole, salvarCursoButton);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        widget = new QWidget(tab_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(11, 11, 371, 211));
        formLayout_3 = new QFormLayout(widget);
        formLayout_3->setSpacing(6);
        formLayout_3->setMargin(11);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_2);

        nomeDisciplina = new QLineEdit(widget);
        nomeDisciplina->setObjectName(QString::fromUtf8("nomeDisciplina"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, nomeDisciplina);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_3);

        idDisciplina = new QLineEdit(widget);
        idDisciplina->setObjectName(QString::fromUtf8("idDisciplina"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, idDisciplina);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_4);

        serieDisciplina = new QLineEdit(widget);
        serieDisciplina->setObjectName(QString::fromUtf8("serieDisciplina"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, serieDisciplina);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_5);

        cursoDisciplina = new QComboBox(widget);
        cursoDisciplina->setObjectName(QString::fromUtf8("cursoDisciplina"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, cursoDisciplina);

        salvarDisciplina = new QPushButton(widget);
        salvarDisciplina->setObjectName(QString::fromUtf8("salvarDisciplina"));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, salvarDisciplina);

        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        menuTeste = new QMenu(menuBar);
        menuTeste->setObjectName(QString::fromUtf8("menuTeste"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuTeste->menuAction());
        menuTeste->addAction(actionSair);

        retranslateUi(MainWindow);
        QObject::connect(actionSair, SIGNAL(triggered()), MainWindow, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionSair->setText(QApplication::translate("MainWindow", "Sai&r", 0, QApplication::UnicodeUTF8));
        actionSelecionarCurso->setText(QApplication::translate("MainWindow", "Selecionar", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Nome:", 0, QApplication::UnicodeUTF8));
        salvarCursoButton->setText(QApplication::translate("MainWindow", "Salvar", 0, QApplication::UnicodeUTF8));
        salvarCursoButton->setShortcut(QApplication::translate("MainWindow", "Return, Enter", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Curso", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Nome:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "ID:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "S\303\251rie:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Curso:", 0, QApplication::UnicodeUTF8));
        salvarDisciplina->setText(QApplication::translate("MainWindow", "Salvar", 0, QApplication::UnicodeUTF8));
        salvarDisciplina->setShortcut(QApplication::translate("MainWindow", "Return, Enter", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Disciplina", 0, QApplication::UnicodeUTF8));
        menuTeste->setTitle(QApplication::translate("MainWindow", "Arquivo", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
