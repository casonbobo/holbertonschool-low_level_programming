#include "lists.h"
/**
 *print_list - prints the list
 *@h: is an h
 * Return: the count of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *car = h
while (car)
	{
	if (car == NULL)
		printf("[0] (nil)\n");
	else
		printf("%d", car->str);
	count++;
	car = car->next;
	}
	return (count);
}
