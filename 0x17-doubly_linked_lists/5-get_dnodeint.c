#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index in doubly linked list
 * @head: pointer to head node
 * @index: index value starting at 0
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}

	return (NULL);
}
