#include "lists.h"
/**
 *free_list - free what?
 *@head: the head of our list
 *Return: no return
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
