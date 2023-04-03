#include "lists.h"

/**
 * free_listint - frees linked list from memory
 * @head: head pointer to first node
 */

void free_listint(listint_t *head)
{
	listint_t *ptr = head;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}
}
