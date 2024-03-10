CXX=g++
CXXFLAGS=-std=c++11 -Wall

.PHONY: all clean

all: main

main: main.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

run: main
	./main

clean:
	rm -f main
