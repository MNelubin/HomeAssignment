PROJECT=go
CC=g++
all:$(PROJECT)
#-c = "compilate"
#-o = " create file "input name" "

$(PROJECT):main.o compozition.o Transformers.o 
	$(CC) main.o  compozition.o Transformers.o -o $(PROJECT)

main.o:main.cpp zAssig3.h inc.h
	$(CC) -c main.cpp -o main.o
	
Transformers.o: Transformers.cpp compozition.h Transformers.h  inc.h
	$(CC) -c   Transformers.cpp -o Transformers.o

Compozition.o:compozition.cpp compozition.h inc.h
	$(CC) -c compozition.cpp -o Compozition.o

clean:
	rm -rf *.o

cleanall:
	rm -rf *.o
	rm -rf $(PROJECT)
