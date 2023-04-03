#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of a linked list
 * @head: head of list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *xnode, *current;
	unsigned int count;

	xnode = *head;
	current = NULL;

	if (!(*head))
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(xnode);
		return (1);
	}
	while (count < index - 1)
	{
		if (!xnode || !(xnode->next))
			return (-1);
		xnode =  xnode->next;
		count++;
	}

	current = xnode->next;
	xnode->next = current->next;
	free(current);

	return (1);
}
