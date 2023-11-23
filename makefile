CXX = g++
CXXFLAGS = -std=c++11 -Wall

SRC = ./src/xios_example.cpp
OBJ = $(SRC:.cpp=.o)
EXECUTABLE = ./bin/xios_example

all: $(EXECUTABLE)

directories:
	mkdir -p bin
	mkdir -p include
	mkdir -p lib

$(EXECUTABLE): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ) $(EXECUTABLE)
