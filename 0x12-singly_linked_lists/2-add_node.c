#include "lists.h"
/**
 *add_node - adds a node. I think
 *@head: so no head
 *@str: a string duhhhh
 *Return: an address or null
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

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

	return (*head);
}
