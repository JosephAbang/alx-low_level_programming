#include "hash_tables.h"

/**
 * hash_table_set - add elememt to the hash table
 * @key: key to be added
 * @value: value to be added/updated
 * @ht: hash table
 * Return: 1 if it succeeded, 0 otherwise
 **/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int idx;

	if (strlen(value) == 0 || value == NULL)
		return (0);
	if (ht == NULL)
		return (0);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = key;
	new->value = strdup(value);
	if (new->value == NULL || new->key == NULL)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = new;
		new->next = NULL;
		return (1);
	}
	else
	{
		new->next = ht->array[idx];
		ht->array[idx] = new;
		return (1);
	}
	return (0);
}
