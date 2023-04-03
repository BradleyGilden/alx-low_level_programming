#include "lists.h"

/**
 * free_listint2 - frees linked list from memory with head=NULL
 * @head: head pointer to first node
 */

void free_listint2(listint_t **head)
{
	listint_t *nxt_ptr = *head;
	listint_t *ptr = *head;

	while (nxt_ptr != NULL)
	{
		nxt_ptr = nxt_ptr->next;
		ptr->next = NULL;
		free(ptr);
		ptr = NULL;
		ptr = nxt_ptr;
	}

	*head = NULL;
}
