CC = gcc
CFLAGS = -Wall -g
OBJMODULES = 	check_file_open.o \
				check_file_close.o \
				filling_out_src.o \
				filling_out_header.o \
				str_to_upper.o

%.o: %.c %.h
			$(CC) $(CFLAGS) -c $<

mk_c_h: mk_c_h.c $(OBJMODULES)
			$(CC) $(CFLAGS) $^ -o $@
