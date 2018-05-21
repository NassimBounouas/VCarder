#ifndef VCARD_H
#define VCARD_H

#include "person.h"

#define vCardVersion "3.0"
#define headerSize 25
#define footerSize 11
#define namePropertySize 3


struct VCard {
    char * filename;
    char * header;
    struct Person * person;
    char * footer;
};

struct VCard * generateVCard(struct Person * person);
void display(struct VCard * vcard);
void freeVCard(struct VCard * vcard);

#endif
