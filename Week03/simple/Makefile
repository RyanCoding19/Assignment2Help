CXX = gcc 

CXXFLAGS =  -g -Wall
LDFLAGS =  

all: debug 

debug: debug.o
	$(CXX)  debug.o -o debug $(LDFLAGS)

debug.o: debug.c
	$(CXX) $(CXXFLAGS) -c debug.c

clean:
	rm debug *.o

gdb: debug
	gdb debug
	
