# Compiler
CXX = g++

# Pretty sure this is NOT how you do a good makefile
ZIB_DIRECTORY = ./

CXXFLAGS = -I$(ZIB_DIRECTORY)

SRCS = base/math/vector2.cpp

demo:
	$(CXX) $(SRCS) $(CXXFLAGS) -o runner
