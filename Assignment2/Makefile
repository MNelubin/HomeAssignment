PROJECT=lauch
CC=g++
all:$(PROJECT)
#-c = "compilate"
#-o = " create file "input name" "

$(PROJECT):main.o DatOut.o
	$(CC) main.o DatOut.o -o $(PROJECT)

main.o:main.cpp zAssig2a.h
	$(CC) -c main.cpp -o main.o
	
DatOut.o:DatOut.cpp zAssig2a.h
	$(CC) -c DatOut.cpp -o DatOut.o

clean:
	rm -rf *.o

cleanall:
	rm -rf *.o
	rm -rf $(PROJECT)

