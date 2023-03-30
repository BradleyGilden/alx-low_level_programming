#include "lists.h"

/**
 * free_list - a function that frees a list_t list
 *
 * @head: the head node of type list_t
 */

void free_list(list_t *head)
{
	list_t *ptr;

	ptr = head;

	while (head != NULL)
	{
		ptr = ptr->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
