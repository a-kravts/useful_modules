CC = gcc
FLAGS = -Wall

SRCMODULES := $(wildcard *.c)
OBJMODULES = $(SRCMODULES:.c=.o)
OBJMODULES32 = $(SRCMODULES:.c=32.o)

libstringf.a: $(OBJMODULES)
	ar crs $@ $^
libstringf32.a: $(OBJMODULES32)
	ar crs $@ $^

$(OBJMODULES): %.o: %.c string_functions.h
	$(CC) $(FLAGS) $< -c
$(OBJMODULES32): %32.o: %.c string_functions.h
	$(CC) $(FLAGS) -m32 -c $< -o $@
