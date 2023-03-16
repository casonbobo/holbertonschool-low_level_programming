#include "lists.h"
/**
 *print_listint - prints a list of integers probably
 *@h: is an h
 *Return: probably nothing or a 0
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *car = h;

	while (car)
	{
		printf("%d", car->n);
		car = car->next;
		count++;
	}
	return (count);
}
