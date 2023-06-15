#include "lists.h"

/**
 * delete_beginning - delete node at beginning
 * @head: pointer to head node
 * Return: 1 always
 */
int delete_beginning(dlistint_t **head)
{
	dlistint_t *temp = *head;

	*head = (*head)->next;
	free(temp);
	if (*head != NULL)
		(*head)->prev = NULL;
	return (1);
}

/**
 * delete_dnodeint_at_index - delete node at specific index
 * @head: pointer to head node
 * index: position of node to be deleted
 * Return: 1 if succeed, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 1;
	dlistint_t *ptr = NULL, *back = NULL;

	if (*head == NULL)
		return (-1);
	if (index == 0)
		return (delete_beginning(head));

	ptr = (*head)->next;
	while (ptr != NULL)
	{
		if (ptr->next == NULL && count == index)
		{
			free(ptr);
			back->next = NULL;
			return (1);
		}
		else if (count == index)
		{
			back->next = ptr->next;
			ptr->next->prev = back;
			free(ptr);
			return (1);
		}

		back = ptr;
		ptr = ptr->next;
		count++;
	}

	return (-1);
}
