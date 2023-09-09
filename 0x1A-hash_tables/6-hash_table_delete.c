#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
 * Return: void
 **/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;

	for (i = 0; i < ht->size; i++)
	{
		while(ht->array[i])
		{
			temp = ht->array[i];
			free(temp->key);
			free(temp->value);
			ht->array[i] = temp->next;
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
