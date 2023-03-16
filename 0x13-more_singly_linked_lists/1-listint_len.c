#include "lists.h"
/**
 *
 *
 *
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *car = h;
	int count = 0;

	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
