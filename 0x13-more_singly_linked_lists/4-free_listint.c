#include "lists.h"
/**
 *free_listint - i wanna be freeeeeeeeeeeee
 *@head: head head head head head head
 *Return: return this thing or that
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
