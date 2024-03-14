CC = gcc
CFLAGS = -Wall

EXECUTABLE = strands.exe

# Includes the file containing SOURCES and HEADERS
include defs.mk

$(EXECUTABLE): $(SOURCES) $(HEADERS)
	$(CC) $(CFLAGS) -o $@ $(SOURCES)

run: $(EXECUTABLE)
	./$(EXECUTABLE)

clean:
	rm -f $(EXECUTABLE)