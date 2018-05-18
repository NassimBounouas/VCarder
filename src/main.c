#include "person.h"
#include "vcard.h"

int main(int argc, char ** argv)
{
	char * header = generateHeader();
	char * footer = generateFooter();
	printf("%s", header);
	printf("%s", footer);
	struct Person * p = createPerson("Morane", "Bob");

	free(header);
	free(footer);
	freePerson(p);
}
