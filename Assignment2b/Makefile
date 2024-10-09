PROJECT=start
CC=g++
all:$(PROJECT)
#-c = "compilate"
#-o = " create file "input name" "

$(PROJECT):main.o r_polish.o solver.o
	$(CC) main.o r_polish.o solver.o -o $(PROJECT)

main.o:main.cpp zAssig2b.h
	$(CC) -c main.cpp -o main.o
	
r_polish.o:r_polish.cpp zAssig2b.h
	$(CC) -c r_polish.cpp -o r_polish.o
	
solver.o:solver.cpp zAssig2b.h
	$(CC) -c solver.cpp -o solver.o

clean:
	rm -rf *.o

cleanall:
	rm -rf *.o
	rm -rf $(PROJECT)

