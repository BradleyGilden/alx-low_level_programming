#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index (index) of linked list
 * @head: head pointer to first node
 * @index: index of node to be removed
 *
 * Return: 1 if succeeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous = *head;
	listint_t *current = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		current = NULL;
		return (1);
	}

	while (index != 0)
	{
		previous = current;
		current = current->next;
		if (current == NULL)
			return (-1);
		index--;
	}

	previous->next = current->next;
	free(current);
	current = NULL;
	return (1);
}
