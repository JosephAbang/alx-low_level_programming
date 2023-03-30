#include "lists.h"

/**
 * print_list - Prints all elememts of a list
 * @h: list
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	size_t elem;

	elem = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		elem++;
	}
	return (elem);
}
