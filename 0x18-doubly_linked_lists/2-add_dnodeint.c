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

	newNode = malloc(sizeof(list_t));

	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = *head;
	(*head) = newNode;
	(*head)->str = strdup(str);
	(*head)->len = strlen(str);
	(*head)->next = newNode->next;
	newNode->prev = NULL;

	return (*head);
}
