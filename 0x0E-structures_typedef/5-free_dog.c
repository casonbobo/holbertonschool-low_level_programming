#include "dog.h"
/**
 *free_dog - go free bro
 *@d: dog go run
 *Return: freedom
 */

void free_dog(dog_t *d);
{
	if (dog_t == NULL)
		return (NULL);

	free(dog_t->owner);
	free(dog_t->name);
	free(dog_t);
}
