CC = gcc
FLAGS = -Wall
HF_PATH = -I ../../ #header file path

SRCMODULES = ../../string_char.c ../../string_length.c

test_p: test_string_char.c $(SRCMODULES)
		$(CC) $(FLAGS) $(HF_PATH) $^ -o $@
