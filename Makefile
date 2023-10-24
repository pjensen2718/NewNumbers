# Compiler
CXX ?= g++

# Compiler flags
CXXFLAGS ?= --std=c++17 -Wconversion -Wall -Werror -pedantic -g3 -Wno-sign-compare -Wno-comment -DDEBUG -fsanitize=address -fsanitize=undefined -D_GLIBCXX_DEBUG

tests: tests.cpp BigNumber.cpp BigNumber.h PreciseNumber.cpp PreciseNumber.h
	$(CXX) $(CXXFLAGS) $^ -o tests.exe

clean:
	rm -rvf *.exe *.out