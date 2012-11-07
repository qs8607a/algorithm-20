target=selection insertion bubble merge quick

all:${target}


CXXFLAGS=-g -O2
LDFLAGS=

selection:selection.o
	g++ -o $@ $^ ${LDFLAGS}

insertion:insertion.o
	g++ -o $@ $^ ${LDFLAGS}

bubble:bubble.o
	g++ -o $@ $^ ${LDFLAGS}

merge:merge.o
	g++ -o $@ $^ ${LDFLAGS}

quick:quick.o
	g++ -o $@ $^ ${LDFLAGS}

.cpp.o:
	g++ -c $^ -o $@ ${CXXFLAGS}

.PHONY:clean

clean:
	rm *.o -rf
	rm ${target} -rf
