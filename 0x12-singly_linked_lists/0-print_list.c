#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list
 * if str = NULL print [0] (nil)
 *
 * @h: the head node of type list_t
 *
 * Return: 
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
			ptr = ptr->next;
			continue;
		}

		printf("[%d] %s\n", ptr->len, ptr->str);
		count++;
		ptr = ptr->next;
	}

	return (count);
}
