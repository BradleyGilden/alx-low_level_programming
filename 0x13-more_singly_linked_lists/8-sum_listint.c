#include "lists.h"

/**
 * sum_listint - returns sum of data in list
 * @head: head pointer to first node
 *
 * Return: sum of data or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
