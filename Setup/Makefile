OBJ = main.o 
INC = -I "./"

Rasterrain: $(OBJ)
	clang++ main.cpp -o Rasterrain.exe
	rm -f $(OBJ)

main.o:
	clang++ -c main.cpp $(INC)

clean:
	rm -f $(OBJ) Rasterrain
