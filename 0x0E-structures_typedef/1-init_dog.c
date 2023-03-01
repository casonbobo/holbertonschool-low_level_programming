#include "dog.h"
/**
 *init_dog - pee pee oiioii
 *@d: heres my dog
 *@name: my dogs name
 *@age: my dogs old
 *@owner: i pick up the poop
 *Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d.name = name;
		d.age = age;
		d.owner = owner;
	};
}
