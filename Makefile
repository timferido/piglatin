CC=g++
CXXFLAGS=-std=c++11
LDFLAGS=

all: piglatin 

piglatin: piglatin.o

piglatin.o: piglatin.cpp

clean: 
	rm output.txt
	touch output.txt
