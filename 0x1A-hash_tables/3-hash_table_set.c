#include "hash_tables.h"

/**
 * build_node - creates hash node with desired key and value
 * @key: key used to access value
 * @value: data stored in hash node
 * Return: the built node or NULL if fails.
 */
hash_node_t *build_node(const char *key, const char *value)
{
	hash_node_t *item = NULL;

	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (NULL);
	item->key = (char *)key;
	item->value = strdup(value);
	if (item->value == NULL)
	{
		free(item);
		return (NULL);
	}
	item->next = NULL;
	return (item);
}

/**
 * hash_table_set - inserts hasnode into table slot or chain
 * @ht: pointer to hash table struct
 * @key: key used to access value
 * @value: data stored in hash node
 * Return: the built node or NULL if fails.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item = NULL;
	unsigned long int h_index;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);

	item = build_node(key, value);
	if (item == NULL)
		return (0);

	h_index = key_index((unsigned char *)item->key, ht->size);

	if (ht->array[h_index] == NULL)
		ht->array[h_index] = item;
	else
	{
		/*ht->array[h_index] is techincally the head*/
		item->next = ht->array[h_index];
		ht->array[h_index]->next = NULL;
		ht->array[h_index] = item;
	}

	return (1);

}
