# Common definitions are placed in here
CC = g++ -std=c++11
LD = g++
RM = rm
SHELL = /bin/sh
ECHO = echo

SUBDIRS =  src
OBJSDIR = src/
INCSDIR = -I./inc
LIBS =
O = *.o
H = *.h
OUT = -o

MAINFILE = main.cpp
EXEC = observer
CCFLAGS = -c -Wall
EXECFLAGS = -o -Wall $(EXEC)
LLFLAGS = -Wall
INCS = -I$(SUBDIRS)
OBJS = Subject.o Observer.o Database.o LogObserver.o BossObserver.o

.SILENT :
