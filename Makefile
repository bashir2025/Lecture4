CXX = g++
CXXFLAGS = -std=c++2a - Wall

all: test main

clean: rm all

test: test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o test

main: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp -o main
