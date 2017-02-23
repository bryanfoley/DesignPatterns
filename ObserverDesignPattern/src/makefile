CC = g++ -std=c++11
CCFLAGS = -c -Wall
INCS = -I../inc
OBJS = Subject.o Database.o LogObserver.o BossObserver.o
RM = rm
O = *.o
TESTEXEC = alltests

tests: $(TESTOBJS)
	echo 'making test objects...'

all: $(OBJS)
	echo 'making objects...'	
	
Subject.o:
	$(CC) $(CCFLAGS) Subject.cpp $(INCS)
	 
Database.o:
	$(CC) $(CCFLAGS) Database.cpp $(INCS)

LogObserver.o:
	$(CC) $(CCFLAGS) LogObserver.cpp $(INCS)
	
BossObserver.o:
	$(CC) $(CCFLAGS) BossObserver.cpp $(INCS)
	 
clean:
	$(RM) $(O)