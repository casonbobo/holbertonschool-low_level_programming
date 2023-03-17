#include "lists.h"
/**
 *sum_listint - this is the sum of list isn't
 *@head: the head of this project keeps moving
 *Return: return return return return return return return return return return
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
