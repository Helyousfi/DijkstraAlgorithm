GCC := gcc
GCCFLAGS := -std=c17 -Wall -Werror -Wextra -pedantic -O3 -march=native

TARGET := dijkstra

SRC := src/dijkstra.c src/utils.c
OBJ := $(SRC:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(GCC) -o $@ $^ $(GCCFLAGS)

%.o: %.c
	$(GCC) -c -o $@ $< $(GCCFLAGS)

clean:
	rm -f $(OBJ) $(TARGET)