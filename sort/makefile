target=selection

all:${target}


CXXFLAGS=-g -O2
LDFLAGS=

selection:selection.o
	g++ -o $@ $^ ${LDFLAGS}

.cpp.o:
	g++ -c $^ -o $@ ${CXXFLAGS}

.PHONY:clean

clean:
	rm *.o -rf
	rm ${target} -rf
