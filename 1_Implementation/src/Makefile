OBJS    =  main.o
SOURCE  =  main.c
HEADER  = helper.h
OUT     = calc.c
CC       = gcc
FLAGS    = -g -c -w
LFLAGS   = -lm  -w

all: $(OBJS)
		$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

docs:
	@doxygen
	

calc.o: calc.c
		$(CC) $(FLAGS) calc.c


clean:
		rm -f $(OBJS) $(OUT) ./*.o
		rm -rf Docs 
run: $(OUT)
		./$(OUT)
