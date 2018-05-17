#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define vCardVersion "3.0"
#define headerSize 25
#define footerSize 10


struct VCard {
	char * filename;
	char * header;
	struct Person * person;
	char * footer;
};

struct Person {
	char * lastname;
	char * firstname;
};

struct Person * init(char * lastname, char * firstname)
{
	struct Person * person = malloc(sizeof(struct Person));
	person->lastname = malloc(strlen(lastname) * sizeof(char));
	person->firstname = malloc(strlen(firstname) * sizeof(char));
	return person;
}

void freePerson(struct Person * person) {
	free(person->lastname);
	free(person->firstname);
	free(person);
}

char * generateHeader()
{
	char * begin = malloc(headerSize * sizeof(char));
	strcpy(begin, "BEGIN:VCARD\n");
	strcat(begin, "VERSION:");
	strcat(begin, vCardVersion);
	strcat(begin, "\n");
	return begin;
}

char * generateFooter()
{
	char * footer = malloc(footerSize * sizeof(char));
	strcpy(footer, "END:VCARD\n");
	return footer;
}

void display(struct Person * p)
{
	printf("Lastname : %s\n", p->lastname);
}

int main(int argc, char ** argv)
{
	char * header = generateHeader();
	char * footer = generateFooter();
	printf("%s", header);
	printf("%s", footer);
	struct Person * p = init("Morane", "Bob");
	free(header);
	free(footer);
	freePerson(p);
}
