#include "lists.h"
/**
 *print_dlistint - is a print to print and do things
 *@h: is a letter but doesnt like talking about it
 *Return: Redrun
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *car = h;

	while (car != NULL)
		{
		printf("%i\n", car->n);
		car = car->next;
		count++;
		}
	return (count);
}
