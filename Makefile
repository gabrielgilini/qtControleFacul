#############################################################################
# Makefile for building: faculdade
# Generated by qmake (2.01a) (Qt 4.5.1) on: Tue Dec 8 10:20:21 2009
# Project:  faculdade.pro
# Template: app
# Command: /usr/bin/qmake -spec /usr/lib/qt/mkspecs/linux-g++ -unix CONFIG+=debug -o Makefile faculdade.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/lib/qt/mkspecs/linux-g++ -I. -I/usr/lib/qt/include/QtCore -I/usr/lib/qt/include/QtGui -I/usr/lib/qt/include -I. -I.
LINK          = g++
LFLAGS        = -Wl,-rpath,/usr/lib/qt/lib
LIBS          = $(SUBLIBS)  -L/usr/lib/qt/lib -lQtGui -L/usr/lib/qt/lib -L/usr/X11R6/lib -pthread -lpng -lfreetype -lgobject-2.0 -lSM -lICE -pthread -pthread -lXrender -lfontconfig -lXext -lX11 -lQtCore -lz -lm -pthread -lgthread-2.0 -lrt -lglib-2.0 -ldl -lpthread
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -sf
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		mainwindow.cpp \
		curso.cpp \
		disciplina.cpp \
		turma.cpp \
		aluno.cpp \
		pessoa.cpp \
		qturmabuttongroup.cpp moc_mainwindow.cpp
OBJECTS       = main.o \
		mainwindow.o \
		curso.o \
		disciplina.o \
		turma.o \
		aluno.o \
		pessoa.o \
		qturmabuttongroup.o \
		moc_mainwindow.o
DIST          = /usr/lib/qt/mkspecs/common/g++.conf \
		/usr/lib/qt/mkspecs/common/unix.conf \
		/usr/lib/qt/mkspecs/common/linux.conf \
		/usr/lib/qt/mkspecs/qconfig.pri \
		/usr/lib/qt/mkspecs/features/qt_functions.prf \
		/usr/lib/qt/mkspecs/features/qt_config.prf \
		/usr/lib/qt/mkspecs/features/exclusive_builds.prf \
		/usr/lib/qt/mkspecs/features/default_pre.prf \
		/usr/lib/qt/mkspecs/features/debug.prf \
		/usr/lib/qt/mkspecs/features/default_post.prf \
		/usr/lib/qt/mkspecs/features/warn_on.prf \
		/usr/lib/qt/mkspecs/features/qt.prf \
		/usr/lib/qt/mkspecs/features/unix/thread.prf \
		/usr/lib/qt/mkspecs/features/moc.prf \
		/usr/lib/qt/mkspecs/features/resources.prf \
		/usr/lib/qt/mkspecs/features/uic.prf \
		/usr/lib/qt/mkspecs/features/yacc.prf \
		/usr/lib/qt/mkspecs/features/lex.prf \
		/usr/lib/qt/mkspecs/features/include_source_dir.prf \
		faculdade.pro
QMAKE_TARGET  = faculdade
DESTDIR       = 
TARGET        = faculdade

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_mainwindow.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: faculdade.pro  /usr/lib/qt/mkspecs/linux-g++/qmake.conf /usr/lib/qt/mkspecs/common/g++.conf \
		/usr/lib/qt/mkspecs/common/unix.conf \
		/usr/lib/qt/mkspecs/common/linux.conf \
		/usr/lib/qt/mkspecs/qconfig.pri \
		/usr/lib/qt/mkspecs/features/qt_functions.prf \
		/usr/lib/qt/mkspecs/features/qt_config.prf \
		/usr/lib/qt/mkspecs/features/exclusive_builds.prf \
		/usr/lib/qt/mkspecs/features/default_pre.prf \
		/usr/lib/qt/mkspecs/features/debug.prf \
		/usr/lib/qt/mkspecs/features/default_post.prf \
		/usr/lib/qt/mkspecs/features/warn_on.prf \
		/usr/lib/qt/mkspecs/features/qt.prf \
		/usr/lib/qt/mkspecs/features/unix/thread.prf \
		/usr/lib/qt/mkspecs/features/moc.prf \
		/usr/lib/qt/mkspecs/features/resources.prf \
		/usr/lib/qt/mkspecs/features/uic.prf \
		/usr/lib/qt/mkspecs/features/yacc.prf \
		/usr/lib/qt/mkspecs/features/lex.prf \
		/usr/lib/qt/mkspecs/features/include_source_dir.prf \
		/usr/lib/qt/lib/libQtGui.prl \
		/usr/lib/qt/lib/libQtCore.prl
	$(QMAKE) -spec /usr/lib/qt/mkspecs/linux-g++ -unix CONFIG+=debug -o Makefile faculdade.pro
/usr/lib/qt/mkspecs/common/g++.conf:
/usr/lib/qt/mkspecs/common/unix.conf:
/usr/lib/qt/mkspecs/common/linux.conf:
/usr/lib/qt/mkspecs/qconfig.pri:
/usr/lib/qt/mkspecs/features/qt_functions.prf:
/usr/lib/qt/mkspecs/features/qt_config.prf:
/usr/lib/qt/mkspecs/features/exclusive_builds.prf:
/usr/lib/qt/mkspecs/features/default_pre.prf:
/usr/lib/qt/mkspecs/features/debug.prf:
/usr/lib/qt/mkspecs/features/default_post.prf:
/usr/lib/qt/mkspecs/features/warn_on.prf:
/usr/lib/qt/mkspecs/features/qt.prf:
/usr/lib/qt/mkspecs/features/unix/thread.prf:
/usr/lib/qt/mkspecs/features/moc.prf:
/usr/lib/qt/mkspecs/features/resources.prf:
/usr/lib/qt/mkspecs/features/uic.prf:
/usr/lib/qt/mkspecs/features/yacc.prf:
/usr/lib/qt/mkspecs/features/lex.prf:
/usr/lib/qt/mkspecs/features/include_source_dir.prf:
/usr/lib/qt/lib/libQtGui.prl:
/usr/lib/qt/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /usr/lib/qt/mkspecs/linux-g++ -unix CONFIG+=debug -o Makefile faculdade.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/faculdade1.0.0 || $(MKDIR) .tmp/faculdade1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/faculdade1.0.0/ && $(COPY_FILE) --parents mainwindow.h aluno.hpp professor.hpp pessoa.hpp curso.h disciplina.h turma.h aluno.h pessoa.h qturmabuttongroup.h .tmp/faculdade1.0.0/ && $(COPY_FILE) --parents main.cpp mainwindow.cpp curso.cpp disciplina.cpp turma.cpp aluno.cpp pessoa.cpp qturmabuttongroup.cpp .tmp/faculdade1.0.0/ && $(COPY_FILE) --parents mainwindow.ui .tmp/faculdade1.0.0/ && (cd `dirname .tmp/faculdade1.0.0` && $(TAR) faculdade1.0.0.tar faculdade1.0.0 && $(COMPRESS) faculdade1.0.0.tar) && $(MOVE) `dirname .tmp/faculdade1.0.0`/faculdade1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/faculdade1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_mainwindow.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_mainwindow.cpp
moc_mainwindow.cpp: qturmabuttongroup.h \
		disciplina.h \
		curso.h \
		turma.h \
		aluno.h \
		pessoa.h \
		mainwindow.h
	/usr/lib/qt/bin/moc $(DEFINES) $(INCPATH) mainwindow.h -o moc_mainwindow.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_mainwindow.h
compiler_uic_clean:
	-$(DEL_FILE) ui_mainwindow.h
ui_mainwindow.h: mainwindow.ui
	/usr/lib/qt/bin/uic mainwindow.ui -o ui_mainwindow.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

main.o: main.cpp mainwindow.h \
		qturmabuttongroup.h \
		disciplina.h \
		curso.h \
		turma.h \
		aluno.h \
		pessoa.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

mainwindow.o: mainwindow.cpp mainwindow.h \
		qturmabuttongroup.h \
		disciplina.h \
		curso.h \
		turma.h \
		aluno.h \
		pessoa.h \
		ui_mainwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainwindow.o mainwindow.cpp

curso.o: curso.cpp curso.h \
		disciplina.h \
		turma.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o curso.o curso.cpp

disciplina.o: disciplina.cpp disciplina.h \
		curso.h \
		turma.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o disciplina.o disciplina.cpp

turma.o: turma.cpp turma.h \
		disciplina.h \
		curso.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o turma.o turma.cpp

aluno.o: aluno.cpp aluno.h \
		pessoa.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o aluno.o aluno.cpp

pessoa.o: pessoa.cpp pessoa.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o pessoa.o pessoa.cpp

qturmabuttongroup.o: qturmabuttongroup.cpp qturmabuttongroup.h \
		disciplina.h \
		curso.h \
		turma.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qturmabuttongroup.o qturmabuttongroup.cpp

moc_mainwindow.o: moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainwindow.o moc_mainwindow.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

