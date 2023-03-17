#include "lists.h"
/**
 *insert_nodeint_at_index - a classification or something
 *@head: a number of sorts
 *@idx: a number or something
 *@n: another number or something
 *Return: 0 or something
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *newNode = malloc(sizeof(*newNode));
	unsigned int count = 0;

	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	while (temp)
	{
		if (count == idx - 1)
			break;
		count++;
		temp = temp->next;
	}

	if (count < idx - 1)
		return (NULL);

	newNode->next = temp->next;
	temp->next = newNode;

	return (newNode);
}
