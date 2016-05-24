bin/reshuravn: obj/reshuravn.o obj/uravn.o
	gcc -o bin/reshuravn obj/reshuravn.o obj/uravn.o

obj/reshuravn.o:
	gcc -c src/reshuravn.c -o obj/reshuravn.o

obj/uravn.o:
	gcc -c src/uravn.c -o obj/uravn.o