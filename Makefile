CXX=g++
CXXFLAGS=-std=c++11 -Wall

# List of source files
SOURCES = main.cpp house.cpp

# List of header files
HEADERS = house.h

# Object files
OBJECTS = $(SOURCES:.cpp=.o)

.PHONY: all clean

all: main

main: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

run: main
	./main

clean:
	rm -f $(OBJECTS) main

