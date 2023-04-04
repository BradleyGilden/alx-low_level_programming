#include "lists.h"

/**
 * print_listint_safe - prints all the elements of a listint_t list
 * @head: head pointer to first node
 *
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t check_nodes, index = 0;

	check_nodes = floyds_algorithm(head);

	if (check_nodes == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			check_nodes++;
		}
	}

	else
	{
		for (index = 0; index < check_nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (check_nodes);
}

/**
 * floyds_algorithm - Counts the number of unique nodes in linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: 0 if list is not looped
 *         unique number of nodes in list
 */
size_t floyds_algorithm(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;
	fast = (head->next)->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
				fast = fast->next;
			}

			slow = slow->next;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
			}

			return (nodes);
		}

		slow = slow->next;
		fast = (fast->next)->next;
	}

	return (0);
}
