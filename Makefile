.PHONY: clean prepare app test
bin/sqrt: prepare obj/main.o obj/sqrt.o
	gcc -Wall obj/main.o obj/sqrt.o -o bin/sqrt -lm

bin/test: prepare obj/sqrt.o obj/test.o obj/ctest.o
	gcc -Wall obj/sqrt.o obj/test.o obj/ctest.o -o bin/test -lm
	
obj/main.o: prepare src/main.c
	gcc -Wall -c src/main.c -o obj/main.o -lm
	
obj/sqrt.o: prepare src/sqrt.c
	gcc -Wall -c src/sqrt.c -o obj/sqrt.o -lm

obj/test.o: prepare test/test.c
	gcc -Wall -c test/test.c -o obj/test.o -lm -Isrc -Ithirdparty

obj/ctest.o: prepare test/ctest.c
	gcc -Wall -c test/ctest.c -o obj/ctest.o -lm -Ithirdparty

prepare: bin obj

app: bin/sqrt
	bin/sqrt

test: bin/test
	bin/test

bin:
	mkdir bin

obj:
	mkdir obj

clean:
	rm -f bin/*
	rm -f obj/*