CXX = g++
CXXFLAGS = -std=c++11 -Wall -I /scratch/fp0/lxw900/spack/opt/spack/linux-rocky8-cascadelake/gcc-12.2.0/xios-2.5.2252-xhwsjmdvzplxts7s667jpufxpq4joi2b/include

SRC = ./src/xios_example.cpp
OBJ = $(SRC:.cpp=.o)
EXECUTABLE = ./bin/xios_example

all: directories $(EXECUTABLE)

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
