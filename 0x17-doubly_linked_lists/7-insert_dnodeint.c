#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: head of list
 * @idx: index of node
 * @n: data
 * Return: the address of the new node, or NULL if it failed
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp1 = *h, *temp2 = *h, *new_node;
	unsigned int cnt = 0;

	while (temp1)
	{
		temp1 = temp1->next;
		cnt++;
	}
	if (idx > cnt)
		return (NULL);
	else if (idx == 0 || *h == NULL)
		return (add_dnodeint(h, n));
	if ((*h)->next == NULL || idx == cnt)
		return (add_dnodeint_end(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	temp1 = *h;
	while (idx != 1)
	{
		temp1 = temp1->next;
		idx--;
	}

	new_node->n = n;
	temp2 = temp1->next;
	new_node->prev = temp1;
	new_node->next = temp2;
	temp2->prev = new_node;
	temp1->next = new_node;

	return (new_node);
}
