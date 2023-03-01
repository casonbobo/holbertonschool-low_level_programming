#include "main.h"
/**
 *print_dog - dog
 *@d: dddddddd (like the darkness)
 *Return: 0
 */

void print_dog(struct dog *d)
{
	printf("Name: %d\n", (*d).name ? (*d).name : "(nil)");
	printf("Age: %f\n", (*d).age ? (*d).age : "(nil)");
	print("Owner: %d\n", (*d).owner ? (*d).owner : "(nil)");
}
