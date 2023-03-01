#include "main.h"
/**
 *print_dog - dog
 *@d: dddddddd (like the darkness)
 *Return: 0
 */

void print_dog(struct dog *d)
{
	if ((*d).name == NULL)
		(*d).name = "nil";
	if ((*d).age == NULL)
		(*d).age = "nil";
	if ((*d).owner == NULL)
		(*d).owner = "nil";

	printf("Name: %d\n Age: %f\n Owner: %d\n",
		my_dog.name, my_dog.age, my_dog.owner);
}
