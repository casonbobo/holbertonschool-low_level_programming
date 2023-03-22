#include "lists.h"
/**
 *add_dnodeint_end - dnoded in this way
 *@head: so no head
 *@n: is a letter to mean a number
 *Return: attidtude check
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(size_t));
	dlistint_t *temp = *head;

	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newNode;
	newNode->prev = temp;
	return (newNode);
}
