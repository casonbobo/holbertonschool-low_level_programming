#include "lists.h"
/**
 *get_nodeint_at_index - count to place and then give me the thing at place
 *@head: hows your head
 *@index: im mr. numbers i do the counting around here
 *Return: return to where you came
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int count;

	while (temp)
	{
		if (count == index)
			return (temp);
		temp = temp->next;
		count++;
	}
	return (NULL);
}
