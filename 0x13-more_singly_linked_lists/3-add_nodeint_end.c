#include "lists.h"
/**
 *add_nodeint_end - this adds
 *@head: if the head causes you to sin cut it off
 *@n: is a letter and likes it that way
 *Return: newNode
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(*newNode));
	listint_t *tempCycle = *head;

	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode = *head;
		return (newNode);
	}

	while (tempCycle->next)
		tempCycle = tempCycle->next;
	tempCycle->next = newNode;
	return (newNode);
}
