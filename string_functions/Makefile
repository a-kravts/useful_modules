CC = gcc
FLAGS = -Wall

SRCMODULES = memory_copy.c \
             memory_move.c \
             memory_set.c \
             string_char.c \
             string_compare.c \
             string_copy.c \
             string_length.c \
             string_n_compare.c \
             string_n_copy.c \
             string_right_char.c \
             string_string.c

OBJMODULES=$(SRCMODULES:.c=.o)

%.o: %.c %.h
	$(CC) $(FLAGS) $< -c

libstringf.a: $(OBJMODULES)
		ar crs $@ $^
