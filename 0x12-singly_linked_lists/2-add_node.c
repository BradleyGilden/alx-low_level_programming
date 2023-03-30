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
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: pointer to the address of the head node pointer of type list_t
 * @str: string to copy and assign to node
 *
 * Return: address of new element or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *beginning;

	if (str == NULL)
		return (NULL);

	beginning = malloc(sizeof(list_t));
	if (beginning == NULL)
		return (NULL);

	beginning->str = strdup(str);
	if (beginning->str == NULL)
		return (NULL);
	beginning->len = _strlen(beginning->str);
	beginning->next = *head;

	*head = beginning;

	return (*head);
}
