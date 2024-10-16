# Compiler
CXX = g++

# Pretty sure this is NOT how you do a good makefile
ZIB_DIRECTORY = ./

CXXFLAGS = -I$(ZIB_DIRECTORY)

# SRCS = base/math/vector2.cpp
SRCS = $(wildcard base/math/*.cpp)
OBJS = $(SRCS:.cpp=.o)

TARGET = runner

demo:
	$(CXX) $(SRCS) $(CXXFLAGS) -o runner

clean:
	rm -f $(OBJ) $(TARGET)
