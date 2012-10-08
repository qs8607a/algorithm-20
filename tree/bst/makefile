target=size maxDepth minValue printTree printPostorder
all:${target}

libs=create_bst.o

CXXFLAGS=-g -O2 -Wall -Werror
LDFLAGS=-g -O2

.cpp.o:
	g++ -o $@ -c $^ ${CXXFLAGS} 

size:size.o ${libs}
	g++ -o $@ $^ ${LDFLAGS}

maxDepth:maxDepth.o ${libs}	
	g++ -o $@ $^ ${LDFLAGS}

minValue:minValue.o ${libs}	
	g++ -o $@ $^ ${LDFLAGS}

printTree:printTree.o ${libs}	
	g++ -o $@ $^ ${LDFLAGS}

printPostorder:printPostorder.o ${libs}	
	g++ -o $@ $^ ${LDFLAGS}


.PHONY:clean

clean:
	rm *.o -rf
	rm ${target} -rf
