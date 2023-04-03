#include "lists.h"

/**
 * listint_len - Length of list
 *
 * @h: Structure
 *
 * Return: List length
 */

size_t listint_len(const listint_t *h)
{
	size_t list_len = 0;

	while (h != NULL)
	{
		h = h->next;
		list_len++;
	}
	return (list_len++);
}
