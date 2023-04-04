#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely
 * @h: pointer to address of head pointer
 *
 * Return: The size of freed list.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *ptr;
	size_t check_nodes, i;

	check_nodes = floyds_algorithm(*h);

	if (check_nodes == 0)
	{
		while (h != NULL && *h != NULL)
		{
			ptr = (*h)->next;
			free(*h);
			*h = ptr;
			check_nodes++;
		}
	}

	else
	{
		for (i = 0; i < check_nodes; i++)
		{
			ptr = (*h)->next;
			free(*h);
			*h = ptr;
		}

		*h = NULL;
	}

	h = NULL;

	return (check_nodes);
}
