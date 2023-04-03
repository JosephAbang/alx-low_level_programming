#include "lists.h"

/**
 * sum_listint - prints sum of data in list
 * @head: head of list
 * Return: sum of all data
 */

int sum_listint(listint_t *head)
{
	listint_t *current = head;
	unsigned int sum = 0;

	if (head == NULL)
		return (0);
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
