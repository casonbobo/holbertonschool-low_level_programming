#include "lists.h"
/**
 *sum_dlistint - sum and sum and sum and sum
 *@head: this head is a preperation for the future heads
 *Return: im old enough to fall dead
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
