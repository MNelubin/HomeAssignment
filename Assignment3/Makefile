PROJECT=go
CC=g++
all:$(PROJECT)
#-c = "compilate"
#-o = " create file "input name" "

$(PROJECT):main.o compozition.o Transformers.o Association.o
	$(CC) main.o  compozition.o Association.o Transformers.o  -o $(PROJECT)

main.o:main.cpp zAssig3.h inc.h
	$(CC) -c main.cpp -o main.o
	
Transformers.o: Transformers.cpp Transformers.h compozition.h Association.h  inc.h
	$(CC) -c Transformers.cpp -o Transformers.o

Compozition.o:compozition.cpp compozition.h inc.h
	$(CC) -c compozition.cpp -o Compozition.o

Association.o:Association.cpp Association.h inc.h
	$(CC) -c Association.cpp -o Association.o

clean:
	rm -rf *.o

cleanall:
	rm -rf *.o
	rm -rf $(PROJECT)
