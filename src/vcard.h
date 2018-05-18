#ifndef VCARD_H
#define VCARD_H

#include "person.h"

#define vCardVersion "3.0"
#define headerSize 25
#define footerSize 10


struct VCard {
    char * filename;
    char * header;
    struct Person * person;
    char * footer;
};

char * generateVCard(struct Person * person);

char * generateHeader();

char * generateFooter();
#endif
