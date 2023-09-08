#include "hash_tables.h"

/**
 * hash_table_get - retrive  value
 * @ht: hash table
 * @key: table key
 * Return: the value associated with the element, or NULL if key couldn’t be found
 **/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int idx;
	if (ht == NULL)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	temp = ht->array[idx];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		else
			temp = temp->next;
	}
	return (NULL);
}
