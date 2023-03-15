#include "lists.h"
/**
 *add_node_end - Adds a nice little node to the end of a list
 *@head: is a pointer to a pointer
 *@str: is a string
 *Return: either one thing or another
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *newNode = malloc(sizeof(size_t));
list_t *temp = *head;

	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;

	while (temp->next)
		temp = temp->next;

	temp->next = newNode;
	return (newNode);
}
