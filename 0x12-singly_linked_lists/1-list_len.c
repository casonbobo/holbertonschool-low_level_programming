#include "lists.h"

/**
 *list_len - counts the length of a list
 *@h: is an h
 *Return: a count?
 */

size_t list_len(const list_t *h)
{
int count = 0;
const list_t *car = h;

while (car)
{
	count++;
	car = car->next;
}
	return (count);
}
