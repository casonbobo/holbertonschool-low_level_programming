#include "main.h"
/**
 *print_dog - dog
 *@d: dddddddd (like the darkness)
 *Return: 0
 */

void print_dog(struct dog *d)
{
	if ((*d).name == NULL)
		my_dog.name = "(nil)";
	if ((*d).age == NULL)
		my_dog.age = "(nil)";
	if ((*d).owner == NULL)
		my_dog.owner = "(nil)";

	printf("Name: %d\n Age: %f\n Owner: %d\n",
		my_dog.name, my_dog.age, my_dog.owner);
}
