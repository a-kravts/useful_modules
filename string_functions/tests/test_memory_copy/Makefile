CC = gcc
FLAGS = -Wall
HF_PATH = -I ../../ #header file path

SRCMODULES = ../../memory_copy.c fill_chr_array.c \
             fill_int_array.c fill_dbl_array.c

OBJMODULES=$(SRCMODULES:.c=.o)

%.o: %.c %.h
		$(CC) $(FLAGS) $(HF_PATH) $< -c

prog: test_memory_copy.c $(OBJMODULES)
		$(CC) $(FLAGS) $(HF_PATH) $^ -o $@
