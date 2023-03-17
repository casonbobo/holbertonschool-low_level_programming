#include "lists.h"
/**
 *pop_listint - pop pop pop like popcorn
 *@head: how many snakes have how many heads
 *Return: just a tiny bit
 */

int pop_listint(listint_t **head)
{
	listint_t *newHead;
	int n = 0;

	if (*head != NULL)
	{
		newHead = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = newHead;
	}
	return (n);
}
