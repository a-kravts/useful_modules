CC = gcc
FLAGS = -Wall
HF_PATH = -I ../../	#header file path

SRCMODULES = ../../string_copy.c ../../string_length.c

test: test_string_copy.c $(SRCMODULES)
		$(CC) $(FLAGS) $(HF_PATH) $^ -o $@
