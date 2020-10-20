CC=g++
CFLAGS=-I.
DEPS = Empregado.hpp Engenheiro.hpp Vendedor.hpp
OBJ = main.o Empregado.o Engenheiro.o Vendedor.o

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o