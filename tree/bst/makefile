target=size maxDepth minValue printTree printPostorder hasPathSum printPaths mirror doubleTree sameTree countTrees isBST isBST2
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

hasPathSum:hasPathSum.o ${libs}	
	g++ -o $@ $^ ${LDFLAGS}


printPaths:printPaths.o ${libs}	
	g++ -o $@ $^ ${LDFLAGS}

mirror:mirror.o ${libs}	
	g++ -o $@ $^ ${LDFLAGS}

doubleTree:doubleTree.o ${libs}	
	g++ -o $@ $^ ${LDFLAGS}

sameTree:sameTree.o ${libs}	
	g++ -o $@ $^ ${LDFLAGS}

countTrees:countTrees.o ${libs}	
	g++ -o $@ $^ ${LDFLAGS}

isBST:isBST.o ${libs}	
	g++ -o $@ $^ ${LDFLAGS}

isBST2:isBST2.o ${libs}	
	g++ -o $@ $^ ${LDFLAGS}

.PHONY:clean

clean:
	rm *.o -rf
	rm ${target} -rf

.PHONY:clean

clean:
	rm *.o -rf
	rm ${target} -rf
