#include "lists.h"

/**
 * free_listint2 - frees linked list from memory with head=NULL
 * @head: head pointer to first node
 */

void free_listint2(listint_t **head)
{
	listint_t *nxt_ptr;

	if (head == NULL)
		return;

	while (*head)
	{
		nxt_ptr = (*head)->next;
		free(*head);
		*head = nxt_ptr;
	}

	head = NULL;
}
