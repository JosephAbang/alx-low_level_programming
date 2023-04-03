#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of list
 * Return: the head node’s data.
 */

int pop_listint(listint_t **head)
{
	listint_t *xnode;
	int remainder;

	if (head == NULL || *head == NULL)
		return (0);
	xnode = (*head)->next;
	remainder  = (*head)->n;
	free(*head);
	*head = xnode;

	return (remainder);
}
