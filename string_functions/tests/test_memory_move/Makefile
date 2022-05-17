CC = gcc
FLAGS = -Wall
HF_PATH = -I ../../ #header file path

SRCMODULES = ../../memory_move.c fill_chr_array.c \
              fill_int_array.c fill_dbl_array.c

OBJMODULES=$(SRCMODULES:.c=.o)

%.o: %.c %.h
	$(CC) $(FLAGS) $(HF_PATH) $< -c

separate_memory_areas: separate_memory_areas.c $(OBJMODULES)
		$(CC) $(FLAGS) $(HF_PATH) $^ -o $@

one_memory_area: one_memory_area.c $(OBJMODULES)
		$(CC) $(FLAGS) $(HF_PATH) -D NUMBER_OF_ELEMENTS=4 $^ -o $@
