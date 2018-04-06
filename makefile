target = main

objects = main.o LOG_file.o LOG_time.o 

cc = gcc
debug_flag = -g
header_path = -I .
lib_path = -L .
libs = -pthread

main : $(objects)
	$(cc) -o $(target) $(objects) $(lib_path) $(libs)

%.o : %.c
	$(cc) -c $(debug_flag) $(header_path) $< -o $@

.PHONY: clean
clean:
	rm $(target) $(objects)
