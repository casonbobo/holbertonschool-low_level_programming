#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
 *struct Dog - good dog
 *@name: name name
 *@age: age age
 *@owner: owner owner
 *Return: 0
 */

struct Dog
{
	char *name;
	float age;
	char *owner;
};
/**
 *main - main main
 *Return: 0
 */

int main(void)
{
	struct Dog my_dog;

	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Bob";

	return (0);
}
#endif
