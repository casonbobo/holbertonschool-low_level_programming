#include "lists.h"
/**
 *free_dlistint - i wanna be freeeee
 *@head: whats the point anymore
 *Return: please return somewhere else
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
	free(temp);
}
