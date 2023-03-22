#include "lists.h"
/**
 *
 *
 *Return: nothing please god
 */
size_t print_dlistint_backward(const dlistint_t *h)
{
	int count = 0;

	if (!h)
		return (0);

	while (h->next)
		h = h->next;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->prev;
	}
	return (count);
}
