#include "lists.h"

/**
 *free_listint2 - free a list or free a bird
 *@head: head to the boat please
 *Return: anything please
 */

void free_listint2(listint_t **head)
{

	if (!(head))
		return;
	free_listint(*head);
	*head = NULL;
}
