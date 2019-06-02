CC=gcc
CFLAGS=-I.
all: mutex_no mutex fmod deadlock

deadlock:
	$(CC) -o deadlock deadlock.c -lpthread $(CFLAGS)
fmod:
	$(CC) -o fmod factorial_mod.c -lpthread $(CFLAGS)
mutex_no:
	$(CC) -o mutex_no mutex_no.c -lpthread $(CFLAGS)
mutex:
	$(CC) -o mutex mutex.c -lpthread $(CFLAGS)
clean:
	rm mutex_no mutex fmod deadlock