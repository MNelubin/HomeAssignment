PROJECT=start
CC=g++
all:$(PROJECT)
#-c = "compilate"
#-o = " create file "input name" "

$(PROJECT):main.o r_polish.o
	$(CC) main.o r_polish.o -o $(PROJECT)

main.o:main.cpp zAssig2b.h
	$(CC) -c main.cpp -o main.o
	
DatOut.o:DatOut.cpp zAssig2b.h
	$(CC) -c r_polish.cpp -o r_polish.o

clean:
	rm -rf *.o

cleanall:
	rm -rf *.o
	rm -rf $(PROJECT)

