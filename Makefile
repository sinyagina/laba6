.PHONY: clean prepare

bin/reshuravn: prepare obj/reshuravn.o obj/uravn.o
	gcc -o bin/reshuravn obj/reshuravn.o obj/uravn.o -lm

obj/reshuravn.o:
	gcc -c src/reshuravn.c -o obj/reshuravn.o

obj/uravn.o:
	gcc -c src/uravn.c -o obj/uravn.o

prepare: bin obj

bin:
	mkdir bin

obj:
	mkdir obj

clean:
	rm -rf bin/* obj/*