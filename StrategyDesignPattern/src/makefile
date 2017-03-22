CC = g++ -std=c++11
CCFLAGS = -c -Wall
INCS = -I../inc -I../intf
OBJS = Duck.o NoQuack.o NoEat.o NoFly.o QuackLoud.o FlyFast.o EatFast.o QuackSoft.o FlySlow.o EatSlow.o
RM = rm
O = *.o
GCH = *.h.gch
TESTEXEC = alltests

tests: $(TESTOBJS)
	echo 'making test objects...'

all: $(OBJS)
	echo 'making objects...'	
	
Duck.o:
	$(CC) $(CCFLAGS) Duck.cpp $(INCS)
	 
NoQuack.o:
	$(CC) $(CCFLAGS) NoQuack.h $(INCS)

NoEat.o:
	$(CC) $(CCFLAGS) NoEat.h $(INCS)
	
NoFly.o:
	$(CC) $(CCFLAGS) NoFly.h $(INCS)
	
QuackLoud.o:
	$(CC) $(CCFLAGS) QuackLoud.h $(INCS)

EatFast.o:
	$(CC) $(CCFLAGS) EatFast.h $(INCS)
	
FlyFast.o:
	$(CC) $(CCFLAGS) FlyFast.h $(INCS)
	
QuackSoft.o:
	$(CC) $(CCFLAGS) QuackSoft.h $(INCS)

EatSlow.o:
	$(CC) $(CCFLAGS) EatSlow.h $(INCS)
	
FlySlow.o:
	$(CC) $(CCFLAGS) FlySlow.h $(INCS)
	 
clean:
	$(RM) $(O) $(GCH)