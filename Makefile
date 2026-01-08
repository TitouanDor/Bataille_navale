CC = gcc
CFLAGS = -Wall -Wextra -O2 -g -O0
LDLIBS = -lncurses
EXEC = miner
SRC := $(wildcard */*.c */*/*.c)
OBJ = $(SRC:.c=.o)

all: $(EXEC) clean

$(EXEC): $(OBJ)
	$(CC) -o $@ $^ $(LDLIBS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	rm -f */*.o */*/*.o
