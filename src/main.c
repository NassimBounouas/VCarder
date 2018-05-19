#include "vcard.h"

int main(int argc, char ** argv)
{
	struct VCard * vcard = generateVCard();
	display(vcard);
	freeVCard(vcard);
}
