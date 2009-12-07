/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Mon Dec 7 19:31:02 2009
**      by: Qt User Interface Compiler version 4.5.1
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSair;
    QAction *actionSelecionarCurso;
    QWidget *centralWidget;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QToolBox *toolBox;
    QWidget *page;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QFormLayout *formLayout_4;
    QLabel *label_8;
    QComboBox *cursoList;
    QPushButton *selecionarCurso;
    QGroupBox *groupBox;
    QWidget *layoutWidget1;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *nomeCurso;
    QPushButton *salvarCurso;
    QWidget *tab_2;
    QWidget *layoutWidget2;
    QFormLayout *formLayout_3;
    QLabel *label_2;
    QLineEdit *nomeDisciplina;
    QLabel *label_3;
    QLineEdit *idDisciplina;
    QLabel *label_4;
    QLineEdit *serieDisciplina;
    QPushButton *salvarDisciplina;
    QWidget *tab_3;
    QWidget *layoutWidget3;
    QFormLayout *formLayout_2;
    QLabel *label_6;
    QLineEdit *idTurma;
    QComboBox *disciplinaTurma;
    QPushButton *salvarTurma;
    QLabel *label_7;
    QWidget *page_2;
    QLabel *label_5;
    QLabel *label_9;
    QFrame *line;
    QListView *listView;
    QListWidget *listWidget;
    QTabWidget *alunoProfessor;
    QWidget *tab_4;
    QLabel *label_17;
    QLineEdit *matriculaAluno;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *gridLayoutWidget;
    QGridLayout *turmasGrid;
    QLabel *label_18;
    QPushButton *salvarAluno;
    QWidget *tab_5;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_10;
    QLabel *label_12;
    QLineEdit *nomePessoa;
    QLineEdit *emailPessoa;
    QLabel *label_14;
    QLabel *label_13;
    QLineEdit *cpfPessoa;
    QLineEdit *telefonePessoa;
    QLabel *label_15;
    QLabel *label_16;
    QDateEdit *nascimentoPessoa;
    QLineEdit *admissaoPessoa;
    QLabel *label_11;
    QPlainTextEdit *enderecoPessoa;
    QMenuBar *menuBar;
    QMenu *menuTeste;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(623, 778);
        MainWindow->setLocale(QLocale(QLocale::Portuguese, QLocale::Brazil));
        actionSair = new QAction(MainWindow);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        actionSelecionarCurso = new QAction(MainWindow);
        actionSelecionarCurso->setObjectName(QString::fromUtf8("actionSelecionarCurso"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        scrollArea_2 = new QScrollArea(centralWidget);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(0, 0, 621, 531));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea_2->sizePolicy().hasHeightForWidth());
        scrollArea_2->setSizePolicy(sizePolicy);
        scrollArea_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 601, 511));
        toolBox = new QToolBox(scrollAreaWidgetContents_2);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setGeometry(QRect(0, 0, 651, 711));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 651, 647));
        tabWidget = new QTabWidget(page);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(0, 0, 581, 341));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 140, 341, 111));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 281, 61));
        formLayout_4 = new QFormLayout(layoutWidget);
        formLayout_4->setSpacing(6);
        formLayout_4->setMargin(11);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_8);

        cursoList = new QComboBox(layoutWidget);
        cursoList->setObjectName(QString::fromUtf8("cursoList"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, cursoList);

        selecionarCurso = new QPushButton(layoutWidget);
        selecionarCurso->setObjectName(QString::fromUtf8("selecionarCurso"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, selecionarCurso);

        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 341, 121));
        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 30, 281, 71));
        formLayout = new QFormLayout(layoutWidget1);
        formLayout->setSpacing(6);
        formLayout->setMargin(11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        nomeCurso = new QLineEdit(layoutWidget1);
        nomeCurso->setObjectName(QString::fromUtf8("nomeCurso"));

        formLayout->setWidget(1, QFormLayout::FieldRole, nomeCurso);

        salvarCurso = new QPushButton(layoutWidget1);
        salvarCurso->setObjectName(QString::fromUtf8("salvarCurso"));

        formLayout->setWidget(2, QFormLayout::FieldRole, salvarCurso);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        layoutWidget2 = new QWidget(tab_2);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(11, 11, 371, 211));
        formLayout_3 = new QFormLayout(layoutWidget2);
        formLayout_3->setSpacing(6);
        formLayout_3->setMargin(11);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_2);

        nomeDisciplina = new QLineEdit(layoutWidget2);
        nomeDisciplina->setObjectName(QString::fromUtf8("nomeDisciplina"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, nomeDisciplina);

        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_3);

        idDisciplina = new QLineEdit(layoutWidget2);
        idDisciplina->setObjectName(QString::fromUtf8("idDisciplina"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, idDisciplina);

        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_4);

        serieDisciplina = new QLineEdit(layoutWidget2);
        serieDisciplina->setObjectName(QString::fromUtf8("serieDisciplina"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, serieDisciplina);

        salvarDisciplina = new QPushButton(layoutWidget2);
        salvarDisciplina->setObjectName(QString::fromUtf8("salvarDisciplina"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, salvarDisciplina);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        layoutWidget3 = new QWidget(tab_3);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 10, 431, 291));
        formLayout_2 = new QFormLayout(layoutWidget3);
        formLayout_2->setSpacing(6);
        formLayout_2->setMargin(11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_6);

        idTurma = new QLineEdit(layoutWidget3);
        idTurma->setObjectName(QString::fromUtf8("idTurma"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, idTurma);

        disciplinaTurma = new QComboBox(layoutWidget3);
        disciplinaTurma->setObjectName(QString::fromUtf8("disciplinaTurma"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, disciplinaTurma);

        salvarTurma = new QPushButton(layoutWidget3);
        salvarTurma->setObjectName(QString::fromUtf8("salvarTurma"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, salvarTurma);

        label_7 = new QLabel(layoutWidget3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_7);

        tabWidget->addTab(tab_3, QString());
        toolBox->addItem(page, QString::fromUtf8("Curso"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 651, 647));
        label_5 = new QLabel(page_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 20, 61, 18));
        label_9 = new QLabel(page_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 320, 91, 18));
        line = new QFrame(page_2);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(133, 20, 20, 611));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        listView = new QListView(page_2);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(10, 40, 121, 261));
        listView->setAlternatingRowColors(true);
        listWidget = new QListWidget(page_2);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 351, 121, 281));
        listWidget->setSortingEnabled(true);
        alunoProfessor = new QTabWidget(page_2);
        alunoProfessor->setObjectName(QString::fromUtf8("alunoProfessor"));
        alunoProfessor->setGeometry(QRect(150, 320, 441, 311));
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        label_17 = new QLabel(tab_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(10, 10, 181, 18));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_17->setFont(font);
        matriculaAluno = new QLineEdit(tab_4);
        matriculaAluno->setObjectName(QString::fromUtf8("matriculaAluno"));
        matriculaAluno->setGeometry(QRect(10, 30, 281, 24));
        scrollArea = new QScrollArea(tab_4);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 90, 411, 151));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 407, 147));
        gridLayoutWidget = new QWidget(scrollAreaWidgetContents);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 391, 131));
        turmasGrid = new QGridLayout(gridLayoutWidget);
        turmasGrid->setSpacing(6);
        turmasGrid->setMargin(11);
        turmasGrid->setObjectName(QString::fromUtf8("turmasGrid"));
        turmasGrid->setContentsMargins(0, 0, 0, 0);
        scrollArea->setWidget(scrollAreaWidgetContents);
        label_18 = new QLabel(tab_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(10, 70, 61, 18));
        salvarAluno = new QPushButton(tab_4);
        salvarAluno->setObjectName(QString::fromUtf8("salvarAluno"));
        salvarAluno->setGeometry(QRect(330, 250, 83, 28));
        alunoProfessor->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        alunoProfessor->addTab(tab_5, QString());
        widget = new QWidget(page_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(150, 30, 381, 274));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        gridLayout->addWidget(label_10, 0, 0, 1, 1);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 0, 1, 1, 1);

        nomePessoa = new QLineEdit(widget);
        nomePessoa->setObjectName(QString::fromUtf8("nomePessoa"));

        gridLayout->addWidget(nomePessoa, 1, 0, 1, 1);

        emailPessoa = new QLineEdit(widget);
        emailPessoa->setObjectName(QString::fromUtf8("emailPessoa"));

        gridLayout->addWidget(emailPessoa, 1, 1, 1, 1);

        label_14 = new QLabel(widget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font);

        gridLayout->addWidget(label_14, 2, 0, 1, 1);

        label_13 = new QLabel(widget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 2, 1, 1, 1);

        cpfPessoa = new QLineEdit(widget);
        cpfPessoa->setObjectName(QString::fromUtf8("cpfPessoa"));

        gridLayout->addWidget(cpfPessoa, 3, 0, 1, 1);

        telefonePessoa = new QLineEdit(widget);
        telefonePessoa->setObjectName(QString::fromUtf8("telefonePessoa"));

        gridLayout->addWidget(telefonePessoa, 3, 1, 1, 1);

        label_15 = new QLabel(widget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout->addWidget(label_15, 4, 0, 1, 1);

        label_16 = new QLabel(widget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font);

        gridLayout->addWidget(label_16, 4, 1, 1, 1);

        nascimentoPessoa = new QDateEdit(widget);
        nascimentoPessoa->setObjectName(QString::fromUtf8("nascimentoPessoa"));
        nascimentoPessoa->setLocale(QLocale(QLocale::Portuguese, QLocale::Brazil));
        nascimentoPessoa->setMaximumDateTime(QDateTime(QDate(2009, 12, 31), QTime(23, 59, 59)));
        nascimentoPessoa->setMaximumDate(QDate(2009, 12, 31));
        nascimentoPessoa->setMinimumDate(QDate(1950, 1, 1));
        nascimentoPessoa->setCurrentSection(QDateTimeEdit::YearSection);
        nascimentoPessoa->setCalendarPopup(true);
        nascimentoPessoa->setDate(QDate(2009, 12, 7));

        gridLayout->addWidget(nascimentoPessoa, 5, 0, 1, 1);

        admissaoPessoa = new QLineEdit(widget);
        admissaoPessoa->setObjectName(QString::fromUtf8("admissaoPessoa"));

        gridLayout->addWidget(admissaoPessoa, 5, 1, 1, 1);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 6, 0, 1, 1);

        enderecoPessoa = new QPlainTextEdit(widget);
        enderecoPessoa->setObjectName(QString::fromUtf8("enderecoPessoa"));

        gridLayout->addWidget(enderecoPessoa, 7, 0, 1, 2);

        toolBox->addItem(page_2, QString::fromUtf8("Pessoas"));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 623, 26));
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

        toolBox->setCurrentIndex(1);
        tabWidget->setCurrentIndex(2);
        alunoProfessor->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "qtControleFacul", 0, QApplication::UnicodeUTF8));
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
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("MainWindow", "Curso", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Alunos", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Professores", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "N\303\272mero de Matr\303\255cula*:", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "Turmas:", 0, QApplication::UnicodeUTF8));
        salvarAluno->setText(QApplication::translate("MainWindow", "Salvar", 0, QApplication::UnicodeUTF8));
        alunoProfessor->setTabText(alunoProfessor->indexOf(tab_4), QApplication::translate("MainWindow", "Aluno", 0, QApplication::UnicodeUTF8));
        alunoProfessor->setTabText(alunoProfessor->indexOf(tab_5), QApplication::translate("MainWindow", "Professor", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "Nome*:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "Email:", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "CPF*:", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "Telefone:", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "Data de Nascimento*:", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "Ano de Admiss\303\243o*:", 0, QApplication::UnicodeUTF8));
        nascimentoPessoa->setDisplayFormat(QApplication::translate("MainWindow", "d/M/yy", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "Endere\303\247o:", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("MainWindow", "Pessoas", 0, QApplication::UnicodeUTF8));
        menuTeste->setTitle(QApplication::translate("MainWindow", "Arquivo", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
