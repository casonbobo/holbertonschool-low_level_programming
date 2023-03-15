#include "main.h"
/**
 *print_list - prints the list
 *@h: is an h
 * Return: the count of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;
while (h)
	{
	if (h == NULL)
		printf("[0] (nil)\n");
	else
		printf("%d", h->data);
	count++;
	h = h->next;
	}
	return (count);
}
