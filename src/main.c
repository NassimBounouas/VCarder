#include "vcard.h"

int main(int argc, char ** argv)
{
	struct Person * john  = createPerson("Doe", "John");
	struct VCard * vcard = generateVCard(john);
	display(vcard);
	freeVCard(vcard);
}
