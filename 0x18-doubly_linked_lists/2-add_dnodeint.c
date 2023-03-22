#include "lists.h"
/**
 *add_dnodeint - and we add a node
 *@head: this is head
 *@n: this is a letter of the alphabet
 *Return: And I would like to sleep
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}
	(*head)->prev = newNode;

	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;
	*head = newNode;

	return (*head);
}
