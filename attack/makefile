# Compiler settings for MSVC
CC = cl
CFLAGS = /std:c++17 /W4
LDFLAGS = user32.lib kernel32.lib

# Output
EXEC = debugger_check.exe
SRC = main.cpp

all: $(EXEC)

$(EXEC): $(SRC)
	$(CC) $(SRC) $(CFLAGS) $(LDFLAGS) /Fe$(EXEC)

clean:
	del .\$(EXEC)
