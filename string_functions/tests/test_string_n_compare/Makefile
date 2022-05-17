CC = gcc
FLAGS = -Wall
HF_PATH = -I ../../ #header file path
DEF = -D COMPARISON_WITH_A_LOOP=0

SRCMODULES = ../../string_n_compare.c

test_loop: test_string_n_compare.c $(SRCMODULES)
		$(CC) $(FLAGS) $(HF_PATH) $^ -o $@

test_recursion: test_string_n_compare.c $(SRCMODULES)
		$(CC) $(FLAGS) $(HF_PATH) $(DEF) $^ -o $@
