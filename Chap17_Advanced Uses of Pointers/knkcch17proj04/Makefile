#makefile in knkcch17poj04
file1:=knkcch17proj04
file2:=line
file3:=word

$(file1): $(file1).o $(file2).o $(file3).o
	gcc -std=c99 -o $(file1) $(file1).o $(file2).o $(file3).o
	make runn

$(file1).o: $(file1).c $(file2).h $(file3).h
	gcc -std=c99 -c $(file1).c

$(file2).o: $(file2).c $(file2).h
	gcc -std=c99 -c $(file2).c

$(file3).o: $(file3).c $(file3).h
	gcc -std=c99 -c $(file3).c

runn:
	./$(file1) < quote > newquote_new

clearr:
	rm $(file1).o $(file2).o $(file3).o
