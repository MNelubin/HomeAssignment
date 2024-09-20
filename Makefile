PROJECT=launch
CC=g++
all:$(PROJECT)
#-c = "compilate"
#-o = " create file "input name" "

$(PROJECT):main.o hellof.o
	$(CC) main.o hellof.o -o $(PROJECT)

main.o:main.cpp 
	$(CC) -c main.cpp -o main.o

hellof.o:hellof.cpp 
	$(CC) -c hellof.cpp  -o hellof.o


clean:
	rm -rf *.o

cleanall:
	rm -rf *.o
	rm -rf $(PROJECT)
