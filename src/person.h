#ifndef PERSON_H
#define PERSON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char * prefix;
    char * lastname;
    char * firstname;
};

struct Person * createPerson(char * lastname, char * firstname);
void freePerson(struct Person * person);
#endif
