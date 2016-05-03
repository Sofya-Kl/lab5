bin/sqrt: obj/main.o obj/sqrt.o
	gcc obj/main.o obj/sqrt.o -o bin/sqrt
	
obj/main.o: src/main.c
	gcc -c src/main.c -o obj/main.o
	
obj/sqrt.o: src/sqrt.c
	gcc -c src/sqrt.c -o obj/func.o

.PHONY: clean
clean:
	rm -f bin/*
	rm -f obj/*