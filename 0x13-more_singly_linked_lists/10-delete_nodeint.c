#include "lists.h"
/**
 *delete_nodeint_at_index - remove a node from my back then please
 *@head: the head of the dragon
 *@index: i dont even know anymore i dont care
 *Return: poopoo
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint_t *node_to_delete;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		node_to_delete = *head;
		*head = (*head)->next;
		free(node_to_delete);
		return (1);
	}

	while (temp && index != 0)
	{
		if (i == index - 1)
			break;
		temp = temp->next;
		i++;
	}

	if (!temp)
		return (-1);

	node_to_delete = temp->next;
	temp->next = temp->next->next;
	free(node_to_delete);
	return (1);
}
