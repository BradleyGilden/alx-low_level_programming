#include "lists.h"

/**
 * sum_dlistint - return sum of data in doubly linked list
 * @head: pointer to head node.
 * Return: sum of data (n)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
