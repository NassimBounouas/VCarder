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

void display(struct Person * p) 
{ 
    printf("Lastname : %s\n", p->lastname); 
}


