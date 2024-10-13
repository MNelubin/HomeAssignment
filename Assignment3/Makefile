PROJECT=go
CC=g++
all:$(PROJECT)
#-c = "compilate"
#-o = " create file "input name" "

$(PROJECT):main.o 
	$(CC) main.o -o $(PROJECT)

main.o:main.cpp 
	$(CC) -c main.cpp -o main.o
	

clean:
	rm -rf *.o

cleanall:
	rm -rf *.o
	rm -rf $(PROJECT)
