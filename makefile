CC = g++
CFLAGS = -Wall -g 

main.exe: main.o list.o
	$(CC) $(CFLAGS) -o main.exe main.o list.o

main.o: List_main.cpp List.h
	$(CC) $(CFLAGS) -c List_main.cpp 

list.o: List.h 