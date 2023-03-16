#include "lists.h"
/**
 *add_nodeint - adding notes and numbers
 *@head: header
 *@n: is an n
 *Return: the address or the NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = *head;
	(*head)->n =  strdup(n);
	(*head)->len = strlen(n);
	(*head)->next = newNode->next;

	return (*head);
}
