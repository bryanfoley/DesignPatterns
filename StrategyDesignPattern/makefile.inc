# Common definitions are placed in here
CC = g++ -std=c++11
LD = g++
RM = rm
SHELL = /bin/sh
ECHO = echo

SUBDIRS =  src
OBJSDIR = src/
INCSDIR = -I./inc -I./intf
LIBS =
O = *.o
H = *.h
GCH = *.h.gch
OUT = -o

MAINFILE = main.cpp
EXEC = strategy
CCFLAGS = -c -Wall
EXECFLAGS = -o -Wall $(EXEC)
LLFLAGS = -Wall
INCS = -I$(SUBDIRS)
OBJS = Duck.o EatFast.o EatSlow.o NoEat.o

.SILENT :
