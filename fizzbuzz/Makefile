CC = gcc
CFLAGS = -Wall -nostdinc
TARGET = fizzbuzz
SRC = fizzbuzz.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(TARGET)
