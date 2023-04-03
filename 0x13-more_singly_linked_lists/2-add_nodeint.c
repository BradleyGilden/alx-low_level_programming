#include "lists.h"

/**
 * add_nodeint - add node at the beginning of the list
 * @head: head pointer to first node
 * @n: integer data
 *
 * Return: pointer to new node or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_int = malloc(sizeof(listint_t));

	if (new_int == NULL)
		return (NULL);

	new_int->n = n;
	new_int->next = *head;
	*head = new_int;

	return (*head);
}
