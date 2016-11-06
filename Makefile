CXX = g++

CXXFLAGS = -g  -std=c++11 -Wall -l c

OBJ = calculator.o node.o parser.o lexer.o 

all: advcalc
 
advcalc: advcalc.cpp $(OBJ) 
	$(CXX) -o $@  $< $(OBJ) $(CXXFLAGS)

lexer.o: lexer.h utils.h

parser.o: lexer.h node.h utils.h

node.o: node.h utils.h

calculator.o: calculator.h parser.h utils.h

.PHONY: clean

clean:

	-rm -f *.exe

	-rm -f *.o 
