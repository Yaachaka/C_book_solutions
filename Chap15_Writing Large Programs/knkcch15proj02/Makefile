#makefile in knkcch15poj02
file1:=knkcch15proj02

$(file1): $(file1).o line.o word.o
	gcc -std=c99 -o $(file1) $(file1).o line.o word.o

$(file1).o: $(file1).c line.h word.h
	gcc -std=c99 -c $(file1).c

line.o: line.c line.h
	gcc -std=c99 -c line.c

word.o: word.c word.h
	gcc -std=c99 -c word.c

runn:
	./$(file1) < quote > newquote

clearr:
	rm $(file1).o line.o word.o