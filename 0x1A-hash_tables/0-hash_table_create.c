#include "hash_tables.h"


hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t));
	hash_node_t *bucket_list = malloc(sizeof(hash_node_t) * size);

	if (new_table == NULL || bucket_list == NULL)
		return NULL;
	
	new_table->size = size;
	return (new_table);
}
