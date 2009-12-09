/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Tue Dec 8 23:12:30 2009
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
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
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
    QToolBox *toolBox;
    QWidget *page_2;
    QLabel *label_5;
    QLabel *label_9;
    QFrame *line;
    QListWidget *professoresList;
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
    QPushButton *cancelarAluno;
    QPushButton *removerAluno;
    QWidget *tab_5;
    QWidget *layoutWidget;
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
    QListWidget *alunosList;
    QWidget *page;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_5;
    QLabel *label_8;
    QComboBox *cursoList;
    QPushButton *removerCurso;
    QPushButton *selecionarCurso;
    QGroupBox *groupBox;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QLineEdit *nomeCurso;
    QSpacerItem *horizontalSpacer;
    QPushButton *salvarCurso;
    QWidget *tab_2;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *nomeDisciplina;
    QLabel *label_3;
    QLineEdit *idDisciplina;
    QLabel *label_4;
    QLineEdit *serieDisciplina;
    QPushButton *cancelarDisciplina;
    QPushButton *salvarDisciplina;
    QGroupBox *groupBox_4;
    QWidget *layoutWidget4;
    QGridLayout *gridLayout_3;
    QLabel *label_19;
    QComboBox *selectDisciplina;
    QPushButton *editarDisciplina;
    QPushButton *removerDisciplina;
    QWidget *tab_3;
    QGroupBox *groupBox_5;
    QWidget *layoutWidget5;
    QGridLayout *gridLayout_6;
    QLabel *label_6;
    QLineEdit *idTurma;
    QLabel *label_7;
    QComboBox *disciplinaTurma;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *salvarTurma;
    QGroupBox *groupBox_6;
    QWidget *layoutWidget6;
    QGridLayout *gridLayout_7;
    QLabel *label_20;
    QComboBox *selectTurmas;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
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
        toolBox = new QToolBox(centralWidget);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setGeometry(QRect(10, 20, 601, 701));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 601, 637));
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
        professoresList = new QListWidget(page_2);
        professoresList->setObjectName(QString::fromUtf8("professoresList"));
        professoresList->setGeometry(QRect(10, 351, 121, 281));
        professoresList->setSortingEnabled(true);
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
        salvarAluno->setGeometry(QRect(110, 250, 101, 28));
        QIcon icon;
        icon.addPixmap(QPixmap(QString::fromUtf8("icons/Knob Add.png")), QIcon::Normal, QIcon::Off);
        salvarAluno->setIcon(icon);
        cancelarAluno = new QPushButton(tab_4);
        cancelarAluno->setObjectName(QString::fromUtf8("cancelarAluno"));
        cancelarAluno->setGeometry(QRect(220, 250, 83, 28));
        removerAluno = new QPushButton(tab_4);
        removerAluno->setObjectName(QString::fromUtf8("removerAluno"));
        removerAluno->setGeometry(QRect(310, 250, 101, 28));
        QIcon icon1;
        icon1.addPixmap(QPixmap(QString::fromUtf8("icons/Knob Remove Red.png")), QIcon::Normal, QIcon::Off);
        removerAluno->setIcon(icon1);
        alunoProfessor->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        alunoProfessor->addTab(tab_5, QString());
        layoutWidget = new QWidget(page_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(150, 30, 381, 274));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        gridLayout->addWidget(label_10, 0, 0, 1, 1);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 0, 1, 1, 1);

        nomePessoa = new QLineEdit(layoutWidget);
        nomePessoa->setObjectName(QString::fromUtf8("nomePessoa"));

        gridLayout->addWidget(nomePessoa, 1, 0, 1, 1);

        emailPessoa = new QLineEdit(layoutWidget);
        emailPessoa->setObjectName(QString::fromUtf8("emailPessoa"));

        gridLayout->addWidget(emailPessoa, 1, 1, 1, 1);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font);

        gridLayout->addWidget(label_14, 2, 0, 1, 1);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 2, 1, 1, 1);

        cpfPessoa = new QLineEdit(layoutWidget);
        cpfPessoa->setObjectName(QString::fromUtf8("cpfPessoa"));

        gridLayout->addWidget(cpfPessoa, 3, 0, 1, 1);

        telefonePessoa = new QLineEdit(layoutWidget);
        telefonePessoa->setObjectName(QString::fromUtf8("telefonePessoa"));

        gridLayout->addWidget(telefonePessoa, 3, 1, 1, 1);

        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font);

        gridLayout->addWidget(label_15, 4, 0, 1, 1);

        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font);

        gridLayout->addWidget(label_16, 4, 1, 1, 1);

        nascimentoPessoa = new QDateEdit(layoutWidget);
        nascimentoPessoa->setObjectName(QString::fromUtf8("nascimentoPessoa"));
        nascimentoPessoa->setLocale(QLocale(QLocale::Portuguese, QLocale::Brazil));
        nascimentoPessoa->setMaximumDateTime(QDateTime(QDate(2009, 12, 31), QTime(23, 59, 59)));
        nascimentoPessoa->setMaximumDate(QDate(2009, 12, 31));
        nascimentoPessoa->setMinimumDate(QDate(1950, 1, 1));
        nascimentoPessoa->setCurrentSection(QDateTimeEdit::DaySection);
        nascimentoPessoa->setCalendarPopup(true);
        nascimentoPessoa->setDate(QDate(2009, 12, 7));

        gridLayout->addWidget(nascimentoPessoa, 5, 0, 1, 1);

        admissaoPessoa = new QLineEdit(layoutWidget);
        admissaoPessoa->setObjectName(QString::fromUtf8("admissaoPessoa"));

        gridLayout->addWidget(admissaoPessoa, 5, 1, 1, 1);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 6, 0, 1, 1);

        enderecoPessoa = new QPlainTextEdit(layoutWidget);
        enderecoPessoa->setObjectName(QString::fromUtf8("enderecoPessoa"));

        gridLayout->addWidget(enderecoPessoa, 7, 0, 1, 2);

        alunosList = new QListWidget(page_2);
        alunosList->setObjectName(QString::fromUtf8("alunosList"));
        alunosList->setGeometry(QRect(10, 40, 121, 261));
        toolBox->addItem(page_2, QString::fromUtf8("Pessoas"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 601, 637));
        tabWidget = new QTabWidget(page);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(0, 0, 581, 471));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 180, 341, 111));
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 20, 281, 81));
        gridLayout_5 = new QGridLayout(layoutWidget1);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setMargin(11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_5->addWidget(label_8, 0, 0, 1, 1);

        cursoList = new QComboBox(layoutWidget1);
        cursoList->setObjectName(QString::fromUtf8("cursoList"));

        gridLayout_5->addWidget(cursoList, 0, 1, 1, 2);

        removerCurso = new QPushButton(layoutWidget1);
        removerCurso->setObjectName(QString::fromUtf8("removerCurso"));
        QIcon icon2;
        icon2.addPixmap(QPixmap(QString::fromUtf8("../../icons/Knob_Buttons_Toolbar_icons_by_iTweek/knobs/PNG/Knob Remove Red.png")), QIcon::Normal, QIcon::Off);
        removerCurso->setIcon(icon2);

        gridLayout_5->addWidget(removerCurso, 1, 1, 1, 1);

        selecionarCurso = new QPushButton(layoutWidget1);
        selecionarCurso->setObjectName(QString::fromUtf8("selecionarCurso"));
        QIcon icon3;
        icon3.addPixmap(QPixmap(QString::fromUtf8("../../icons/Knob_Buttons_Toolbar_icons_by_iTweek/knobs/PNG/Knob Valid Green.png")), QIcon::Normal, QIcon::Off);
        selecionarCurso->setIcon(icon3);

        gridLayout_5->addWidget(selecionarCurso, 1, 2, 1, 1);

        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 341, 121));
        layoutWidget2 = new QWidget(groupBox);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 20, 281, 91));
        gridLayout_4 = new QGridLayout(layoutWidget2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setMargin(11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        nomeCurso = new QLineEdit(layoutWidget2);
        nomeCurso->setObjectName(QString::fromUtf8("nomeCurso"));

        gridLayout_4->addWidget(nomeCurso, 0, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 1, 1, 1, 1);

        salvarCurso = new QPushButton(layoutWidget2);
        salvarCurso->setObjectName(QString::fromUtf8("salvarCurso"));
        QIcon icon4;
        icon4.addPixmap(QPixmap(QString::fromUtf8("../../icons/Knob_Buttons_Toolbar_icons_by_iTweek/knobs/PNG/Knob Add.png")), QIcon::Normal, QIcon::Off);
        salvarCurso->setIcon(icon4);

        gridLayout_4->addWidget(salvarCurso, 1, 2, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 10, 401, 201));
        layoutWidget3 = new QWidget(groupBox_3);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 40, 361, 141));
        gridLayout_2 = new QGridLayout(layoutWidget3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setMargin(11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        nomeDisciplina = new QLineEdit(layoutWidget3);
        nomeDisciplina->setObjectName(QString::fromUtf8("nomeDisciplina"));

        gridLayout_2->addWidget(nomeDisciplina, 0, 1, 1, 3);

        label_3 = new QLabel(layoutWidget3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        idDisciplina = new QLineEdit(layoutWidget3);
        idDisciplina->setObjectName(QString::fromUtf8("idDisciplina"));

        gridLayout_2->addWidget(idDisciplina, 1, 1, 1, 3);

        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);

        serieDisciplina = new QLineEdit(layoutWidget3);
        serieDisciplina->setObjectName(QString::fromUtf8("serieDisciplina"));

        gridLayout_2->addWidget(serieDisciplina, 2, 1, 1, 1);

        cancelarDisciplina = new QPushButton(layoutWidget3);
        cancelarDisciplina->setObjectName(QString::fromUtf8("cancelarDisciplina"));

        gridLayout_2->addWidget(cancelarDisciplina, 3, 2, 1, 1);

        salvarDisciplina = new QPushButton(layoutWidget3);
        salvarDisciplina->setObjectName(QString::fromUtf8("salvarDisciplina"));
        salvarDisciplina->setIcon(icon);

        gridLayout_2->addWidget(salvarDisciplina, 3, 3, 1, 1);

        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 270, 401, 161));
        layoutWidget4 = new QWidget(groupBox_4);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 30, 261, 91));
        gridLayout_3 = new QGridLayout(layoutWidget4);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setMargin(11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(layoutWidget4);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_3->addWidget(label_19, 0, 0, 1, 1);

        selectDisciplina = new QComboBox(layoutWidget4);
        selectDisciplina->setObjectName(QString::fromUtf8("selectDisciplina"));

        gridLayout_3->addWidget(selectDisciplina, 0, 1, 1, 2);

        editarDisciplina = new QPushButton(layoutWidget4);
        editarDisciplina->setObjectName(QString::fromUtf8("editarDisciplina"));

        gridLayout_3->addWidget(editarDisciplina, 1, 1, 1, 1);

        removerDisciplina = new QPushButton(layoutWidget4);
        removerDisciplina->setObjectName(QString::fromUtf8("removerDisciplina"));
        removerDisciplina->setIcon(icon1);

        gridLayout_3->addWidget(removerDisciplina, 1, 2, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        groupBox_5 = new QGroupBox(tab_3);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 10, 361, 171));
        layoutWidget5 = new QWidget(groupBox_5);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(19, 36, 301, 111));
        gridLayout_6 = new QGridLayout(layoutWidget5);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setMargin(11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget5);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_6->addWidget(label_6, 0, 0, 1, 1);

        idTurma = new QLineEdit(layoutWidget5);
        idTurma->setObjectName(QString::fromUtf8("idTurma"));

        gridLayout_6->addWidget(idTurma, 0, 1, 1, 2);

        label_7 = new QLabel(layoutWidget5);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_6->addWidget(label_7, 1, 0, 1, 1);

        disciplinaTurma = new QComboBox(layoutWidget5);
        disciplinaTurma->setObjectName(QString::fromUtf8("disciplinaTurma"));

        gridLayout_6->addWidget(disciplinaTurma, 1, 1, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_2, 2, 1, 1, 1);

        salvarTurma = new QPushButton(layoutWidget5);
        salvarTurma->setObjectName(QString::fromUtf8("salvarTurma"));
        salvarTurma->setIcon(icon);

        gridLayout_6->addWidget(salvarTurma, 2, 2, 1, 1);

        groupBox_6 = new QGroupBox(tab_3);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 230, 351, 161));
        layoutWidget6 = new QWidget(groupBox_6);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(20, 40, 261, 81));
        gridLayout_7 = new QGridLayout(layoutWidget6);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setMargin(11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(layoutWidget6);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_7->addWidget(label_20, 0, 0, 1, 1);

        selectTurmas = new QComboBox(layoutWidget6);
        selectTurmas->setObjectName(QString::fromUtf8("selectTurmas"));

        gridLayout_7->addWidget(selectTurmas, 0, 1, 1, 2);

        pushButton_3 = new QPushButton(layoutWidget6);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout_7->addWidget(pushButton_3, 1, 1, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget6);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setIcon(icon1);

        gridLayout_7->addWidget(pushButton_2, 1, 2, 1, 1);

        tabWidget->addTab(tab_3, QString());
        toolBox->addItem(page, QString::fromUtf8("Curso"));
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

        toolBox->setCurrentIndex(0);
        alunoProfessor->setCurrentIndex(0);
        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "qtControleFacul", 0, QApplication::UnicodeUTF8));
        actionSair->setText(QApplication::translate("MainWindow", "Sai&r", 0, QApplication::UnicodeUTF8));
        actionSelecionarCurso->setText(QApplication::translate("MainWindow", "Selecionar", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Alunos", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Professores", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "N\303\272mero de Matr\303\255cula*:", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "Turmas:", 0, QApplication::UnicodeUTF8));
        salvarAluno->setText(QApplication::translate("MainWindow", "Salvar", 0, QApplication::UnicodeUTF8));
        cancelarAluno->setText(QApplication::translate("MainWindow", "Cancelar", 0, QApplication::UnicodeUTF8));
        removerAluno->setText(QApplication::translate("MainWindow", "Remover", 0, QApplication::UnicodeUTF8));
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
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Selecionar", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Curso:", 0, QApplication::UnicodeUTF8));
        removerCurso->setText(QApplication::translate("MainWindow", "Remover", 0, QApplication::UnicodeUTF8));
        selecionarCurso->setText(QApplication::translate("MainWindow", "Selecionar", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Novo", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Nome:", 0, QApplication::UnicodeUTF8));
        salvarCurso->setText(QApplication::translate("MainWindow", "Salvar", 0, QApplication::UnicodeUTF8));
        salvarCurso->setShortcut(QApplication::translate("MainWindow", "Return, Enter", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Curso", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Novo", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Nome:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "ID:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "S\303\251rie:", 0, QApplication::UnicodeUTF8));
        cancelarDisciplina->setText(QApplication::translate("MainWindow", "Cancelar", 0, QApplication::UnicodeUTF8));
        salvarDisciplina->setText(QApplication::translate("MainWindow", "Salvar", 0, QApplication::UnicodeUTF8));
        salvarDisciplina->setShortcut(QApplication::translate("MainWindow", "Return, Enter", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Editar/Remover", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "Disciplina:", 0, QApplication::UnicodeUTF8));
        editarDisciplina->setText(QApplication::translate("MainWindow", "Editar", 0, QApplication::UnicodeUTF8));
        removerDisciplina->setText(QApplication::translate("MainWindow", "Remover", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Disciplina", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Novo", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "ID:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Disciplina:", 0, QApplication::UnicodeUTF8));
        salvarTurma->setText(QApplication::translate("MainWindow", "Salvar", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Editar/Remover", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("MainWindow", "Turmas:", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "Editar", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "Remover", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Turma", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("MainWindow", "Curso", 0, QApplication::UnicodeUTF8));
        menuTeste->setTitle(QApplication::translate("MainWindow", "Arquivo", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
