CXX = g++
CXXFLAGS	= -std=c++17 -Wall

all: test

main: functions_to_implement.o test.cpp
	$(CXX) $(CXXFLAGS) test.cpp functions_to_implement.o -o test

functions_to_implement.o: functions_to_implement.cpp
	$(CXX) $(CXXFLAGS) -c functions_to_implement.cpp

clean:
	rm functions_to_implement.o test