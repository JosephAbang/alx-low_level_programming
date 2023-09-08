#include "hash_tables.h"

/**
 * key_index - Get the key index
 * @key: key to be stored
 * @size: size of array
 * Return: index of key
 **/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	idx = hash_djb2(key);
	return (idx % size);
}
