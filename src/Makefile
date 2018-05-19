vcarder: main.c vcard.o person.o
	gcc main.c vcard.o person.o -o vcarder


vcard.o: vcard.c vcard.h person.o
	gcc -c vcard.c

person.o: person.c person.h
	gcc -c person.c

clean:
	rm *.o vcarder
