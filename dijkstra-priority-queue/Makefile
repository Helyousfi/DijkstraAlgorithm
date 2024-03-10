CXX := g++
CXXFLAGS := -std=c++23 -Wall -Werror -Wextra -pedantic -O3 -march=native

TARGET := dijkstra-pq

SRC := src/dijkstraPriorityQueue.cpp src/graph.cpp
OBJ := $(SRC:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) -o $@ $^ $(CXXFLAGS)

%.o: %.c
	$(CXX) -c -o $@ $< $(CXXFLAGS)

clean:
	rm -f $(OBJ) $(TARGET)