#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
	int id;
	char * name;
};

void init(struct Person * p, int id, char * name)
{

}

void display(struct Person * p)
{
	printf("Id   : %d\n", p->id);
	printf("Name : %s\n", p->name);
}

int main(int argc, char ** argv)
{
	printf("---\n");
	struct Person tom;
	tom.id = 0;
	tom.name = malloc(sizeof(char));
	strcpy(tom.name, "Tom");
	display(&tom);
	free(tom.name);
}
