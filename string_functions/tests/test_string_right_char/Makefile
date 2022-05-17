CC = gcc
FLAGS = -Wall
HF_PATH = -I ../../ #header file path
DEF = -D IN_REVERSE_ORDER=0

SRCMODULES = ../../string_right_char.c ../../string_length.c

test_reverse: test_string_right_char.c $(SRCMODULES)
		$(CC) $(FLAGS) $(HF_PATH) $^ -o $@

test_direct: test_string_right_char.c $(SRCMODULES)
		$(CC) $(FLAGS) $(HF_PATH) $(DEF) $^ -o $@
