#include "lists.h"

/**
 * free_listint2 - Frees list and sets head to null
 * @head: Head of list
 * Return: Freed list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
