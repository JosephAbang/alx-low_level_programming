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
	hash_node_t *new, *temp;
	unsigned long int idx, i = 0;

	if (strlen(value) == 0 || value == NULL)
		return (0);
	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	if (new->key == NULL || new->value == NULL)
	{
		free(new->key);
		free(new->value);
		free(new);
		return (0);
	}

	idx = key_index((unsigned char *)key, ht->size);
	temp = ht->array[i];
	while (temp)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(temp);
			break;
		}
		temp = temp->next;
		i++;
	}
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
