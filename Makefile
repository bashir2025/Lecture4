CXX = g++
CXXFLAGS = -std=c++20 -Wall

all: test main

clean: 
    rm main test
    
test: test.cpp
    $(CXX) $(CXXFLAGS) test.cpp  -o test

main: functions_to_implement.o main.cpp
    $(CXX) $(CXXFLAGS) main.cpp -o main
