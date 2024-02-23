SOURCE := main.c
OBJECT := main.o
CC := gcc
CFLAGS:= -Wall -Wextra -Wconversion -O2 -lraylib

output: $(OBJECT)
	$(CC) $(CFLAGS) $(OBJECT) -o output

$(OBJECT): $(SOURCE)
	$(CC) $(SOURCE) -c

clean:
	rm $(OBJECT)
