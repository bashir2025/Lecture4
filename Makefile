
CXX = g++
CXXFLAGS = -std=c++20 -Wall

all: test main

clean: rm all
    
test: test.cpp
    $(CXX) $(CXXFLAGS) test.cpp  -o test

main: main.cpp
    $(CXX) $(CXXFLAGS) main.cpp -o main
