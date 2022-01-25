CXX = gcc 

CXXFLAGS = -Wall -g
LDFLAGS = -lpthread 

all: debugThreads

debugThreads: debugThreads.o
	$(CXX)  debugThreads.o -o debugThreads $(LDFLAGS)

debugThreads.o: debugThreads.c
	$(CXX) $(CXXFLAGS) -c debugThreads.c

clean:
	rm debugThreads *.o
