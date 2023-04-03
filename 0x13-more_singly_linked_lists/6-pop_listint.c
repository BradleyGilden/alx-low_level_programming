#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: head pointer to first node
 *
 * Return: the deleted integer data
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	listint_t *nxt_ptr = *head;
	int deleted_data = 0;

	nxt_ptr = nxt_ptr->next;
	*head = nxt_ptr;

	deleted_data = ptr->n;
	free(ptr);
	ptr = NULL;

	return (deleted_data);
}
