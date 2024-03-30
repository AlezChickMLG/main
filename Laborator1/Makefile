p: main.o integrala.o functie.o
	clang -Wall main.o integrala.o functie.o -lm -o p

main.o: main.c integrala.h functie.h
	clang -c -Wall main.c

integrala.o: integrala.c integrala.h
	clang -c -Wall integrala.c
	
functie.o: functie.c functie.h
	clang -c -Wall functie.c

.PHONY: clean
clean:
	clear
	rm -f *.o
	rm -f p
