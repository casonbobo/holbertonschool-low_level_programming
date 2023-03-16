#include "lists.h"
/**
 *add_nodeint - adding and counting has been my day job since birth
 *@head: header
 *@n: is an n
 *Return: the address or the NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *newNode = malloc(sizeof(list_t));
	list_t *tempCycle = *head;

	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = n;
	newNode->next = tempCycle;
	*head = newNode;

	return (newNode);
}
