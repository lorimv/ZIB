# Compiler
CXX = g++

# Directories
ZIB_DIR = ./
OBJ_DIR = obj

# Flags
# TODO add a better system for 3rd party includes (how do I get the flag before each one programatically?)
CXXFLAGS = -I$(ZIB_DIR) -I./thirdparty/spdlog/include -std=c++17 -Wall -Wextra

# Source files
SRCS = $(wildcard base/*/*.cpp) $(wildcard main/*.cpp)

# Object files
OBJS = $(SRCS:%.cpp=$(OBJ_DIR)/%.o)

# Target
TARGET = libzib.a

# Phony targets
.PHONY: all clean

all: $(TARGET)

# Rule to create object directory
$(OBJ_DIR):
	mkdir -p $@

# Rule to compile .cpp to .o
$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Rule to create the library
$(TARGET): $(OBJS)
	ar rcs $@ $^

clean:
	rm -rf $(OBJ_DIR) $(TARGET)
