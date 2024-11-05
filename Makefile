# Compiler
CXX = g++

# Don't think this is how you do a good makefile
# i'll do more once I have a better idea of how my engine acc runs
ZIB_DIRECTORY = ./

CXXFLAGS = -I$(ZIB_DIRECTORY)

SRCS = $(wildcard base/math/*.cpp) $(wildcard main/*.cpp)
OBJS = $(SRCS:.cpp=.o)

TARGET = runner

demo:
	$(CXX) $(SRCS) $(CXXFLAGS) -o runner

clean:
	rm -f $(OBJ) $(TARGET)
