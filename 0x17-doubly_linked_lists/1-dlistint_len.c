#include "lists.h"

/**
 * dlistint_len - count nodes in a linked list
 * @h: head of doubly linked list
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
