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
} my_dog;
#endif
