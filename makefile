CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)
COMP = $(CC) $(CFLAGS)

SRC = $(wildcard *.cpp)
HEAD= $(wildcard *.hpp)
OBJ = $(SRC:.cpp=.o)

all : $(OBJ)

%.o : %.cpp $(HEAD)
	$(COMP) $< -o $@

clean :
	rm *.o
