#include "dog.h"
/**
 *free_dog - go free bro
 *@d: dog go run
 *Return: freedom
 */

void free_dog(dog_t *d);
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
