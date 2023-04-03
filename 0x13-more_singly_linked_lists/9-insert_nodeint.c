#include "lists.h"
#include <stdlib.h>

/**
 * InsertBeginning - inserts new node at beginning of linked list
 * @head: head pointer to first node
 * @n: integer data of inserted node
 *
 * Return: address of newly inserted node
 */

listint_t *InsertBeginning(listint_t **head, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head pointer to first node
 * @idx: index to insert node
 * @n: integer data of inserted node
 *
 * Return: address of newly inserted node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *new_node;

	if (idx == 0 || *head == NULL)
	{
		*head = InsertBeginning(head, n);
		return (*head);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	while (idx != 1)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
		idx--;
	}

	new_node->next = ptr->next;
	ptr->next = new_node;

	return (new_node);
}
