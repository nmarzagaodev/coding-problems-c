CC = gcc
CFLAGS = -Wall -Wextra -std=c99
SRC = main.c lib/randomarray_int.c
OBJ = $(SRC:.c=.o)
TARGET = bubble-sort.out

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)
