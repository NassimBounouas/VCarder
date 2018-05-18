person.o: person.c person.h
	gcc -c person.c

vcard.o: vcard.c vcard.h
	gcc -c vcard.c

vcarder: main.c vcard.o person.o
	gcc main.c vcard.o person.o -o vcarder

clean:
	rm *.o vcarder
