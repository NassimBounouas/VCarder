#include "person.h"

struct Person * createPerson(char * lastname, char * firstname)
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

