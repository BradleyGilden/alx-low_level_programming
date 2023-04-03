#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head: head pointer to first node
 * @index: index of node to be returned
 *
 * Return: pointer to nth node in list or NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int count = 0;

	if (count == index)
		return (head);

	while (count < index)
	{
		ptr = ptr->next;

		if (ptr == NULL)
			return (NULL);

		count++;
	}

	return (ptr);
}
