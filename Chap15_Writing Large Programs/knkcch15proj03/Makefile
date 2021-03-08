#makefile in knkcch15poj03
file1:=knkcch15proj03

$(file1): $(file1).o quicksort.o
	gcc -std=c99 -o $(file1) $(file1).o quicksort.o

$(file1).o: $(file1).c quicksort.h
	gcc -std=c99 -c $(file1).c

quicksort.o: quicksort.c quicksort.h
	gcc -std=c99 -c quicksort.c

runn:
	./$(file1)

clearr:
	rm $(file1).o quicksort.o