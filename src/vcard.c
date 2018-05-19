#include "vcard.h"

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

char * generateNameProperty(struct VCard * vcard)
{
	struct Person * person = vcard->person;
	int firstnameSize = strlen(person->firstname) + 1;
	int lastnameSize = strlen(person->lastname) + 1;
	int prefixSize   = strlen(person->prefix) + 1;
	int totalSize = (namePropertySize + lastnameSize + firstnameSize + prefixSize + 1);
    char * nameProp = malloc(totalSize * sizeof(char));
    strcpy(nameProp, "N:");
    strcat(nameProp, person->lastname);
    strcat(nameProp, ",");
    strcat(nameProp, person->firstname);
    strcat(nameProp, ";");
    strcat(nameProp, person->prefix);
    strcat(nameProp, ";");
    strcat(nameProp, "\n");
    return nameProp;
}

char * addPerson(struct Person * person)
{

}

struct VCard * generateVCard()
{
	struct VCard * vcard = malloc(sizeof(struct VCard));
	vcard->filename = malloc(sizeof(char));
	vcard->header = generateHeader();
	//vcard-> person = malloc(sizeof(struct Person));
	vcard->person = createPerson("Doe", "John");
	vcard->footer = generateFooter();
	return vcard;
}

void display(struct VCard * vcard)
{
    printf("%s", vcard->header);
	char * nameProperty = generateNameProperty(vcard);
    printf("%s", nameProperty);
	free(nameProperty);
    printf("%s", vcard->footer);
}

void freeVCard(struct VCard * vcard)
{
	free(vcard->filename);
	free(vcard->header);
	freePerson(vcard->person);
	free(vcard->footer);
	free(vcard);
}
