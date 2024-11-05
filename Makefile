# Compiler
CXX = g++

# Don't think this is how you do a good makefile
# i'll do more once I have a better idea of how my engine acc runs
# will need to find out how to make it a library usable by ext apps
ZIB_DIRECTORY = ./

CXXFLAGS = -I$(ZIB_DIRECTORY) -shared -fPIC
# CXXFLAGS = -I$(ZIB_DIRECTORY) -shared -fPIC

SRCS = $(wildcard base/math/*.cpp) $(wildcard main/*.cpp)
OBJS = $(SRCS:.cpp=.o)

TARGET = runner
# TARGET = libzib.so

demo:
	$(CXX) $(SRCS) $(CXXFLAGS) -o $(TARGET)

clean:
	rm -f $(OBJ) $(TARGET)
