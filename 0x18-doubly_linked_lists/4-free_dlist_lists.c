#include "lists.h"
/**
 *free_dlistint - i wanna be freeeee
 *@head: whats the point anymore
 *Return: please return somewhere else
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
	free(temp);
}
