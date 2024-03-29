#include "lists.h"

/**
 * add_nodeint - adds new node at beginning of list
 * @head: beginning of list
 * @n: integer member
 * Return: the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = (*head);
	*head = new_node;
	return (*head);
}
