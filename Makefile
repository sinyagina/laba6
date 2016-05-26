.PHONY: clean prepare

bin/reshuravn: prepare obj/reshuravn.o obj/uravn.o
	gcc -o bin/reshuravn obj/reshuravn.o obj/uravn.o -lm

bin/test: prepare obj/uravn.o obj/ctest.o obj/test.o
	gcc -o bin/test obj/uravn.o obj/ctest.o obj/test.o -lm

obj/reshuravn.o: src/reshuravn.c
	gcc -c src/reshuravn.c -o obj/reshuravn.o

obj/uravn.o: src/uravn.c
	gcc -c src/uravn.c -o obj/uravn.o

obj/ctest.o: test/ctest.c
	gcc -c test/ctest.c -o obj/ctest.o -Ithirdparty

obj/test.o: test/test.c
	gcc -c test/test.c -o obj/test.o -Ithirdparty -Isrc

prepare: bin obj

bin:
	mkdir bin

obj:
	mkdir obj

clean:
	rm -rf bin/* obj/*