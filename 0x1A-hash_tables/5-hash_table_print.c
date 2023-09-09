#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: hash table
 * Return: void
 **/


void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;
	int first_pair = 1;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (!first_pair)
			{
				printf(", ");
			}
			printf("'%s': '%s'", temp->key, temp->value);
			first_pair = 0;
			temp = temp->next;
		}
	}

	printf("}\n");
}
