PROJECT=go
CC=g++
all:$(PROJECT)
#-c = "compilate"
#-o = " create file "input name" "

$(PROJECT):main.o Transformers.o
	$(CC) main.o  Transformers.o -o $(PROJECT)

main.o:main.cpp zAssig3.h
	$(CC) -c main.cpp -o main.o
	
Transformers.o:Transformers.cpp Transformers.h
	$(CC) -c Transformers.cpp -o Transformers.o

clean:
	rm -rf *.o

cleanall:
	rm -rf *.o
	rm -rf $(PROJECT)
