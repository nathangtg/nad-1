CC = gcc
CFLAGS = -Wall -Wextra

OUTPUT = program

SRC = main.c login.c register.c

OBJ = $(SRC:.c=.o)

all: $(OUTPUT)

$(OUTPUT): $(OBJ)
	$(CC) $(OBJ) -o $(OUTPUT)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(OUTPUT)

.PHONY: all clean
