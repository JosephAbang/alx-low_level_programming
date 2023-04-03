#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of list
 * @idx:  index of the list where the new node should be added
 * @n: integer member of list
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head, *new_node;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (!new_node)
			return (NULL);
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (current && i <= idx)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
