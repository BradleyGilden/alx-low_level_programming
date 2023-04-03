#include "lists.h"

/**
 * listint_len - returns the length of the linked list
 * @h: head pointer to first node
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}

	return (count);
}
