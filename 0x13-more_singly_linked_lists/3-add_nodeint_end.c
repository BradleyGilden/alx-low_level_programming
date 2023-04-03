#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add node at the end of the list
 * @head: head pointer to first node
 * @n: integer data
 *
 * Return: pointer to new node or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_int;
	listint_t *ptr = *head;

	if (*head == NULL)
	{
		*head = malloc(sizeof(listint_t));
		if (*head == NULL)
			return (NULL);
		(*head)->n = n;
		(*head)->next = NULL;
		return (*head);
	}

	new_int = malloc(sizeof(listint_t));

	if (new_int == NULL)
		return (NULL);

	new_int->n = n;
	new_int->next = NULL;

	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = new_int;

	return (new_int);
}
