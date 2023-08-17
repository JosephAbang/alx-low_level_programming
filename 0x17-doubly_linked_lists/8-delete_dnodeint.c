#include "lists.h"

/**
 * delete_dnodeint_at_index - delete nofe at nth index
 * @head: Head of the list
 * @index: index of node 
 * Return:1 if it succeeded, -1 if it failed
 **/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp1 = *head, *temp2, *temp3;
	unsigned int cnt = 0;

	if (*head == NULL)
		return (-1);

	while (temp1->next)
	{
		temp1 = temp1->next;
		cnt++;
	}
	temp1 = *head;
	if (index > cnt)
		return (-1);
	else if (index == 0)
	{
		if ((*head)->next == NULL)
		{
			temp1 = *head;
			*head = NULL;
			free(temp1);
			return (1);
		}
		temp2 = temp1->next;
		temp2->prev = NULL;
		*head = temp2;
		free(temp1);
		return (1);
	}	
	else
	{
		temp1 = *head;
		temp2 = *head;
		while (index != 1)
		{
			temp1 = temp1->next;
			index--;
		}
		temp2 = temp1->next->next;
		temp3 = temp1->next;
		temp1->next = temp2;
		temp2->prev = temp1;
		free(temp3);
	}
	return (1);
}
