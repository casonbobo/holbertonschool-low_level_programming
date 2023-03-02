#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
 *struct dog - good dog
 *@name: name name
 *@age: age age
 *@owner: owner owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog, dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
my_dog *new_dog(char *name, float age, char *owner);
void free_dog(my_dog *d);
#endif
