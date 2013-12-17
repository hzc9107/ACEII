#############################################################################
# Makefile for building: AceVal
# Generated by qmake (2.01a) (Qt 4.8.3) on: Mon Dec 16 23:30:26 2013
# Project:  AceVal.pro
# Template: app
# Command: /usr/bin/qmake -o Makefile AceVal.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_WEBKIT -DQT_NO_DEBUG -DQT_SQL_LIB -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtSql -I/usr/include/qt4 -I/usr/include/gstreamer-0.10 -I/usr/include/glib-2.0 -I/usr/lib/i386-linux-gnu/glib-2.0/include -I/usr/include/libxml2 -I. -I.
LINK          = g++
LFLAGS        = -Wl,-O1
LIBS          = $(SUBLIBS)  -L/usr/lib/i386-linux-gnu -lgstinterfaces-0.10 -lgstreamer-0.10 -lgobject-2.0 -lgmodule-2.0 -lgthread-2.0 -lrt -lxml2 -lglib-2.0 -lQtSql -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		aceval.cpp \
		pipeline.cpp \
		scenedialog.cpp \
		playerdialog.cpp \
		playerscontrol.cpp \
		dbconnection.cpp \
		newdb.cpp \
		dbthread.cpp \
		dialog.cpp moc_aceval.cpp \
		moc_scenedialog.cpp \
		moc_playerdialog.cpp \
		moc_playerscontrol.cpp \
		moc_dbconnection.cpp \
		moc_newdb.cpp \
		moc_dbthread.cpp \
		moc_dialog.cpp
OBJECTS       = main.o \
		aceval.o \
		pipeline.o \
		scenedialog.o \
		playerdialog.o \
		playerscontrol.o \
		dbconnection.o \
		newdb.o \
		dbthread.o \
		dialog.o \
		moc_aceval.o \
		moc_scenedialog.o \
		moc_playerdialog.o \
		moc_playerscontrol.o \
		moc_dbconnection.o \
		moc_newdb.o \
		moc_dbthread.o \
		moc_dialog.o
DIST          = /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		AceVal.pro
QMAKE_TARGET  = AceVal
DESTDIR       = 
TARGET        = AceVal

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

$(TARGET): ui_aceval.h ui_scenedialog.h ui_playerdialog.h ui_playerscontrol.h ui_dbconnection.h ui_newdb.h ui_dialog.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: AceVal.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/i386-linux-gnu/libQtSql.prl \
		/usr/lib/i386-linux-gnu/libQtGui.prl \
		/usr/lib/i386-linux-gnu/libQtCore.prl
	$(QMAKE) -o Makefile AceVal.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/i386-linux-gnu/libQtSql.prl:
/usr/lib/i386-linux-gnu/libQtGui.prl:
/usr/lib/i386-linux-gnu/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -o Makefile AceVal.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/AceVal1.0.0 || $(MKDIR) .tmp/AceVal1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/AceVal1.0.0/ && $(COPY_FILE) --parents aceval.h pipeline.h scene.h scenedialog.h player.h playerdialog.h playerscontrol.h dbconnection.h newdb.h dbthread.h dialog.h .tmp/AceVal1.0.0/ && $(COPY_FILE) --parents main.cpp aceval.cpp pipeline.cpp scenedialog.cpp playerdialog.cpp playerscontrol.cpp dbconnection.cpp newdb.cpp dbthread.cpp dialog.cpp .tmp/AceVal1.0.0/ && $(COPY_FILE) --parents aceval.ui scenedialog.ui playerdialog.ui playerscontrol.ui dbconnection.ui newdb.ui dialog.ui .tmp/AceVal1.0.0/ && (cd `dirname .tmp/AceVal1.0.0` && $(TAR) AceVal1.0.0.tar AceVal1.0.0 && $(COMPRESS) AceVal1.0.0.tar) && $(MOVE) `dirname .tmp/AceVal1.0.0`/AceVal1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/AceVal1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_aceval.cpp moc_scenedialog.cpp moc_playerdialog.cpp moc_playerscontrol.cpp moc_dbconnection.cpp moc_newdb.cpp moc_dbthread.cpp moc_dialog.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_aceval.cpp moc_scenedialog.cpp moc_playerdialog.cpp moc_playerscontrol.cpp moc_dbconnection.cpp moc_newdb.cpp moc_dbthread.cpp moc_dialog.cpp
moc_aceval.cpp: scene.h \
		player.h \
		dbthread.h \
		aceval.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) aceval.h -o moc_aceval.cpp

moc_scenedialog.cpp: scenedialog.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) scenedialog.h -o moc_scenedialog.cpp

moc_playerdialog.cpp: playerdialog.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) playerdialog.h -o moc_playerdialog.cpp

moc_playerscontrol.cpp: scene.h \
		player.h \
		playerscontrol.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) playerscontrol.h -o moc_playerscontrol.cpp

moc_dbconnection.cpp: dbconnection.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) dbconnection.h -o moc_dbconnection.cpp

moc_newdb.cpp: newdb.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) newdb.h -o moc_newdb.cpp

moc_dbthread.cpp: dbthread.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) dbthread.h -o moc_dbthread.cpp

moc_dialog.cpp: dialog.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) dialog.h -o moc_dialog.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_aceval.h ui_scenedialog.h ui_playerdialog.h ui_playerscontrol.h ui_dbconnection.h ui_newdb.h ui_dialog.h
compiler_uic_clean:
	-$(DEL_FILE) ui_aceval.h ui_scenedialog.h ui_playerdialog.h ui_playerscontrol.h ui_dbconnection.h ui_newdb.h ui_dialog.h
ui_aceval.h: aceval.ui
	/usr/bin/uic-qt4 aceval.ui -o ui_aceval.h

ui_scenedialog.h: scenedialog.ui
	/usr/bin/uic-qt4 scenedialog.ui -o ui_scenedialog.h

ui_playerdialog.h: playerdialog.ui
	/usr/bin/uic-qt4 playerdialog.ui -o ui_playerdialog.h

ui_playerscontrol.h: playerscontrol.ui
	/usr/bin/uic-qt4 playerscontrol.ui -o ui_playerscontrol.h

ui_dbconnection.h: dbconnection.ui
	/usr/bin/uic-qt4 dbconnection.ui -o ui_dbconnection.h

ui_newdb.h: newdb.ui
	/usr/bin/uic-qt4 newdb.ui -o ui_newdb.h

ui_dialog.h: dialog.ui
	/usr/bin/uic-qt4 dialog.ui -o ui_dialog.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

main.o: main.cpp aceval.h \
		scene.h \
		player.h \
		dbthread.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

aceval.o: aceval.cpp aceval.h \
		scene.h \
		player.h \
		dbthread.h \
		ui_aceval.h \
		pipeline.h \
		scenedialog.h \
		playerdialog.h \
		playerscontrol.h \
		dbconnection.h \
		newdb.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o aceval.o aceval.cpp

pipeline.o: pipeline.cpp pipeline.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o pipeline.o pipeline.cpp

scenedialog.o: scenedialog.cpp scenedialog.h \
		ui_scenedialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o scenedialog.o scenedialog.cpp

playerdialog.o: playerdialog.cpp playerdialog.h \
		ui_playerdialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o playerdialog.o playerdialog.cpp

playerscontrol.o: playerscontrol.cpp playerscontrol.h \
		scene.h \
		player.h \
		ui_playerscontrol.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o playerscontrol.o playerscontrol.cpp

dbconnection.o: dbconnection.cpp dbconnection.h \
		ui_dbconnection.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o dbconnection.o dbconnection.cpp

newdb.o: newdb.cpp newdb.h \
		ui_newdb.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o newdb.o newdb.cpp

dbthread.o: dbthread.cpp dbthread.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o dbthread.o dbthread.cpp

dialog.o: dialog.cpp dialog.h \
		ui_dialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o dialog.o dialog.cpp

moc_aceval.o: moc_aceval.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_aceval.o moc_aceval.cpp

moc_scenedialog.o: moc_scenedialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_scenedialog.o moc_scenedialog.cpp

moc_playerdialog.o: moc_playerdialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_playerdialog.o moc_playerdialog.cpp

moc_playerscontrol.o: moc_playerscontrol.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_playerscontrol.o moc_playerscontrol.cpp

moc_dbconnection.o: moc_dbconnection.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_dbconnection.o moc_dbconnection.cpp

moc_newdb.o: moc_newdb.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_newdb.o moc_newdb.cpp

moc_dbthread.o: moc_dbthread.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_dbthread.o moc_dbthread.cpp

moc_dialog.o: moc_dialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_dialog.o moc_dialog.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

