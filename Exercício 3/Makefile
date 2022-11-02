APPS = ./app
BIN = ./bin
INCLUDE = ./include
LIB = ./lib
OBJ = ./obj
SRC = ./src

all: libed myapps

libed:
	gcc -c $(SRC)/ListaDinEnc.c -I $(INCLUDE) -o $(OBJ)/ListaDinEnc.o

myapps:
	gcc $(APPS)/main3.c $(OBJ)/*.o -I $(INCLUDE) -o $(BIN)/app

$(OBJ)/%.o: $(SRC)/%.c $(INCLUDE)/%.h
	gcc $(FLAGS) -c $< -I $(INCLUDE) -o $@

$(BIN)/%: $(APPS)/%.c
	gcc $(FLAGS) $< $(LIBS) -I $(INCLUDE) -o $@