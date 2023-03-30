#include "lists.h"

/**
 * list_len - returns number of elements of a list_t list
 *
 * @h: the head node of type list_t
 *
 * Return: the number of elements within a list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
