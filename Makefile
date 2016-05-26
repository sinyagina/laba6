.PHONY: clean prepare

bin/reshuravn: prepare obj/reshuravn.o obj/uravn.o
	gcc -o bin/reshuravn obj/reshuravn.o obj/uravn.o -lm

obj/reshuravn.o: src/reshuravn.c
	gcc -c src/reshuravn.c -o obj/reshuravn.o

obj/uravn.o: src/uravn.c
	gcc -c src/uravn.c -o obj/uravn.o

prepare: bin obj

bin:
	mkdir bin

obj:
	mkdir obj

clean:
	rm -rf bin/* obj/*