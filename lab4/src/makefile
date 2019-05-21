CC=gcc
CFLAGS=-I.
ALL : parallel_min_max ZOM process_memory par_sum

parallel_min_max : utils.o find_min_max.o utils.h find_min_max.h
	$(CC) -o parallel_min_max utils.o find_min_max.o parallel_min_max.c $(CFLAGS)

utils.o : utils.h
	$(CC) -o utils.o -c utils.c $(CFLAGS)

find_min_max.o : utils.h find_min_max.h
	$(CC) -o find_min_max.o -c find_min_max.c $(CFLAGS)

Summa.o : Summa.h
	$(CC) -o Summa.o -c Summa.c $(CFLAGS)

par_sum : Summa.o utils.o Summa.h utils.h
	$(CC) -o par_sum utils.o Summa.o parallel_sum.c -lpthread $(CFLAGS)

process_memory : process_memory.c
	$(CC) -o process_memory process_memory.c $(CFLAGS)

ZOM : ZOM.c
	$(CC) -o ZOM ZOM.c $(CFLAGS)
	
	

clean :
	rm utils.o find_min_max.o parallel_min_max Summa.o ZOM process_memory par_sum

