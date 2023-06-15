#include "lists.h"

/**
 * add_dnodeint_end - add node at end of doubly linked list
 * @head: pointer to head node of list
 * @n: new node data
 * Return: address of new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *ptr = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new_node;
	new_node->prev = ptr;
	return (new_node);
}
