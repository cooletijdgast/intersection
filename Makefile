CC = g++
CFLAGS = -Wall -Wextra -Wconversion -Wpedantic -fno-stack-protector 

LIBS = -lncurses

IDIR = include
SDIR = src

DEPS = $(wildcard *.cpp)

default: $(DEPS)
	$(CC) -o program $^ $(CFLAGS)$(LIBS)