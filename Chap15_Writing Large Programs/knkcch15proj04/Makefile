#makefile in knkcch15poj04
file1:=knkcch15proj04
file2:=readline

$(file1): $(file1).o $(file2).o
	gcc -std=c99 -o $(file1) $(file1).o $(file2).o

$(file1).o: $(file1).c $(file2).h
	gcc -std=c99 -c $(file1).c

$(file2).o: $(file2).c $(file2).h
	gcc -std=c99 -c $(file2).c

runn:
	./$(file1)

clearr:
	rm $(file1).o $(file2).o