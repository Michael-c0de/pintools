# Compiler and flags
CC = cl
CFLAGS = /std:c11 /W4
LDFLAGS = user32.lib kernel32.lib

# Get all .c files in the directory
SRC = $(wildcard *.cpp)

# Strip extension to get executable names
EXE = $(SRC:.cpp=.exe)

# Default target: build all executables
all: $(EXE)

# Pattern rule: each .c → .exe
%.exe: %.cpp
	$(CC) $< $(CFLAGS) $(LDFLAGS) /Fe$@

# Clean all generated executables and intermediates
clean:
	del /Q *.obj *.exe
