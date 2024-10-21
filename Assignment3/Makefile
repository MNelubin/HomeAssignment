PROJECT=go
CC=g++
all:$(PROJECT)
#-c = "compilate"
#-o = " create file "input name" "

$(PROJECT):main.o compozition.o Transformers.o Association.o Optimus_Prime.o Megatron.o Bamblbee.o
	$(CC) main.o  compozition.o Association.o Transformers.o Optimus_Prime.o Megatron.o Bamblbee.o -o $(PROJECT)

main.o:main.cpp zAssig3.h 
	$(CC) -c main.cpp -o main.o
	
Transformers.o: Transformers.cpp Transformers.h compozition.h Association.h  
	$(CC) -c Transformers.cpp -o Transformers.o

Compozition.o:compozition.cpp compozition.h 
	$(CC) -c compozition.cpp -o Compozition.o

Association.o:Association.cpp Association.h 
	$(CC) -c Association.cpp -o Association.o

Optimus_Prime.o:Optimus_Prime.cpp Optimus_Prime.h Transformers.h 
	$(CC) -c Optimus_Prime.cpp -o Optimus_Prime.o

Megatron.o:Megatron.cpp Megatron.h Transformers.h 
	$(CC) -c Megatron.cpp -o Megatron.o

Bamblbee.o:Bamblbee.cpp Bamblbee.h Transformers.h 
	$(CC) -c Bamblbee.cpp -o Bamblbee.o
clean:
	rm -rf *.o

cleanall:
	rm -rf *.o
	rm -rf $(PROJECT)
