#include "lists.h"

/**
 * _strlen - returns string length
 *
 * @str: input string
 *
 * Return: length of string
 */

int _strlen(char *str)
{
	int i = 0, len = 0;

	while (str[i++])
		len++;

	return (len);
}

/**
 * add_node_end - adds a new node at the beginning of a list_t list
 *
 * @head: pointer to the address of the head node pointer of type list_t
 * @str: string to copy and assign to node
 *
 * Return: address of new element or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end;
	list_t *ptr;
	/* ptr is just used for traversing */
	if (str == NULL)
		return (NULL);

	if (*head == NULL)
	{
		(*head) = malloc(sizeof(list_t));
		if ((*head) == NULL)
			return (NULL);
		(*head)->str = strdup(str);
		if ((*head)->str == NULL)
		{
			free((*head)->str);
			free((*head));
		}
		(*head)->len = _strlen((*head)->str);
		(*head)->next = NULL;
		return (*head);
	}
	end = malloc(sizeof(list_t));
	if (end == NULL)
		return (NULL);
	end->str = strdup(str);
	if (end->str == NULL)
	{
		free(end->str);
		free(end);
	}
	end->len = _strlen(end->str);
	end->next = NULL;
	ptr = *head;

	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = end;

	return (end);
}
