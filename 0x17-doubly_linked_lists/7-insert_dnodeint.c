#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @idx: index in which node is inserted
 * @h: pointer to head node
 * @n: data of node to be inserted
 * Return: NULL if failed or address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 1;
	dlistint_t *ptr = NULL, *new_node = NULL;

	if (*h == NULL || idx == 0)
		return (add_dnodeint(h, n));

	ptr = *h;
	while (ptr != NULL)
	{
		if (count == idx && ptr->next == NULL)
			return (add_dnodeint_end(h, n));
		else if (count == idx)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);
			new_node->n = n;
			new_node->next = ptr->next;
			ptr->next->prev = new_node;
			new_node->prev = ptr;
			ptr->next = new_node;
			return (new_node);
		}
		ptr = ptr->next;
		count++;
	}
	return (NULL);
}
