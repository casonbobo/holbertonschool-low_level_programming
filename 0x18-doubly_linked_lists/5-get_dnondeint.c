#include "lists.h"
/**
 *get_dnodeint_at_index - node at the int ... at the index?
 *@head: head count
 *@index:a count of some kind probably
 *Return: Megamans butt
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp);
}
