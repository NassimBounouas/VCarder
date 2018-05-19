#include "person.h"

struct Person * createPerson(char * lastname, char * firstname)
{
    struct Person * person = malloc(sizeof(struct Person));
    //person->prefix = malloc(sizeof(char));
    person->prefix = strdup("");
    person->lastname = malloc((strlen(lastname) + 1) * sizeof(char));
	strcpy(person->lastname, lastname);
    person->firstname = malloc((strlen(firstname) + 1) * sizeof(char));
	strcpy(person->firstname, firstname);
    return person;
}

void freePerson(struct Person * person) {
    free(person->prefix);
    free(person->lastname);
    free(person->firstname);
    free(person);
}

