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

typedef struct Dog
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
}
#endif
