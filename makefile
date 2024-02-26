VERSION := 0.3
SOURCE := main.c window.c shape.c draw.c
OBJECT := main.o window.o shape.o draw.o
CC := gcc
CFLAGS:= -Wall -Wextra -Wconversion -O2 -lraylib

output: $(OBJECT)
	$(CC) $(CFLAGS) $(OBJECT) -o output

$(OBJECT): $(SOURCE)
	$(CC) $(SOURCE) -c

clean:
	rm $(OBJECT) output
