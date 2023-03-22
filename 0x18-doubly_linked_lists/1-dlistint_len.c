#include "lists.h"
/**
 *dlistint_len - and run and run and run
 *@h: howdy towdy
 *Return: holy smokes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *car = h;

	while (car)
	{
		count++;
		car = car->next;
	}
		return (count);
}
