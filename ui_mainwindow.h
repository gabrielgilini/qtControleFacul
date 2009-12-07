/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Mon Dec 7 02:39:23 2009
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
#include <QtGui/QGroupBox>
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
    QGroupBox *groupBox_2;
    QWidget *widget;
    QFormLayout *formLayout_4;
    QLabel *label_8;
    QComboBox *cursoList;
    QPushButton *selecionarCurso;
    QGroupBox *groupBox;
    QWidget *widget1;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *nomeCurso;
    QPushButton *salvarCurso;
    QWidget *tab_2;
    QWidget *layoutWidget;
    QFormLayout *formLayout_3;
    QLabel *label_2;
    QLineEdit *nomeDisciplina;
    QLabel *label_3;
    QLineEdit *idDisciplina;
    QLabel *label_4;
    QLineEdit *serieDisciplina;
    QPushButton *salvarDisciplina;
    QWidget *tab_3;
    QWidget *widget2;
    QFormLayout *formLayout_2;
    QLabel *label_6;
    QLineEdit *idTurma;
    QComboBox *disciplinaTurma;
    QPushButton *salvarTurma;
    QLabel *label_7;
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
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(10, 10, 581, 341));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 140, 341, 111));
        widget = new QWidget(groupBox_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 30, 281, 61));
        formLayout_4 = new QFormLayout(widget);
        formLayout_4->setSpacing(6);
        formLayout_4->setMargin(11);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_8);

        cursoList = new QComboBox(widget);
        cursoList->setObjectName(QString::fromUtf8("cursoList"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, cursoList);

        selecionarCurso = new QPushButton(widget);
        selecionarCurso->setObjectName(QString::fromUtf8("selecionarCurso"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, selecionarCurso);

        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 341, 121));
        widget1 = new QWidget(groupBox);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(20, 30, 281, 71));
        formLayout = new QFormLayout(widget1);
        formLayout->setSpacing(6);
        formLayout->setMargin(11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        nomeCurso = new QLineEdit(widget1);
        nomeCurso->setObjectName(QString::fromUtf8("nomeCurso"));

        formLayout->setWidget(1, QFormLayout::FieldRole, nomeCurso);

        salvarCurso = new QPushButton(widget1);
        salvarCurso->setObjectName(QString::fromUtf8("salvarCurso"));

        formLayout->setWidget(2, QFormLayout::FieldRole, salvarCurso);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        layoutWidget = new QWidget(tab_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(11, 11, 371, 211));
        formLayout_3 = new QFormLayout(layoutWidget);
        formLayout_3->setSpacing(6);
        formLayout_3->setMargin(11);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_2);

        nomeDisciplina = new QLineEdit(layoutWidget);
        nomeDisciplina->setObjectName(QString::fromUtf8("nomeDisciplina"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, nomeDisciplina);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_3);

        idDisciplina = new QLineEdit(layoutWidget);
        idDisciplina->setObjectName(QString::fromUtf8("idDisciplina"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, idDisciplina);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_4);

        serieDisciplina = new QLineEdit(layoutWidget);
        serieDisciplina->setObjectName(QString::fromUtf8("serieDisciplina"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, serieDisciplina);

        salvarDisciplina = new QPushButton(layoutWidget);
        salvarDisciplina->setObjectName(QString::fromUtf8("salvarDisciplina"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, salvarDisciplina);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        widget2 = new QWidget(tab_3);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(10, 10, 431, 291));
        formLayout_2 = new QFormLayout(widget2);
        formLayout_2->setSpacing(6);
        formLayout_2->setMargin(11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_6);

        idTurma = new QLineEdit(widget2);
        idTurma->setObjectName(QString::fromUtf8("idTurma"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, idTurma);

        disciplinaTurma = new QComboBox(widget2);
        disciplinaTurma->setObjectName(QString::fromUtf8("disciplinaTurma"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, disciplinaTurma);

        salvarTurma = new QPushButton(widget2);
        salvarTurma->setObjectName(QString::fromUtf8("salvarTurma"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, salvarTurma);

        label_7 = new QLabel(widget2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_7);

        tabWidget->addTab(tab_3, QString());
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

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionSair->setText(QApplication::translate("MainWindow", "Sai&r", 0, QApplication::UnicodeUTF8));
        actionSelecionarCurso->setText(QApplication::translate("MainWindow", "Selecionar", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Selecionar", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Curso:", 0, QApplication::UnicodeUTF8));
        selecionarCurso->setText(QApplication::translate("MainWindow", "Selecionar", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Adicionar novo", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Nome:", 0, QApplication::UnicodeUTF8));
        salvarCurso->setText(QApplication::translate("MainWindow", "Salvar", 0, QApplication::UnicodeUTF8));
        salvarCurso->setShortcut(QApplication::translate("MainWindow", "Return, Enter", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Curso", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Nome:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "ID:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "S\303\251rie:", 0, QApplication::UnicodeUTF8));
        salvarDisciplina->setText(QApplication::translate("MainWindow", "Salvar", 0, QApplication::UnicodeUTF8));
        salvarDisciplina->setShortcut(QApplication::translate("MainWindow", "Return, Enter", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Disciplina", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "ID:", 0, QApplication::UnicodeUTF8));
        salvarTurma->setText(QApplication::translate("MainWindow", "Salvar", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Disciplina:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Turma", 0, QApplication::UnicodeUTF8));
        menuTeste->setTitle(QApplication::translate("MainWindow", "Arquivo", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
