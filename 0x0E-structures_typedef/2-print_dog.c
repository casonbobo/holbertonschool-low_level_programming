#include "dog.h"
/**
 *print_dog - dog
 *@d: dddddddd (like the darkness)
 *Return: 0
 */

void print_dog(struct dog *d)
{
	if (d)
	{
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.6.6.6.6.6.6f\n", d->age ? d->age : "(nil)");
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
