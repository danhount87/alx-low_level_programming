#include "lists.h"
#include <stdlib.h>
/* @zinzinpolice */
/**
 * delete_dnodeint_at_index - function that deletes
 * a node at a specific index
 * @head: double pointer
 * @index: index at which to delete node
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *crnt;
	unsigned int j;

	if (head == NULL || *head == NULL)
		return (-1);
	crnt = *head;
	if (index == 0)
	{
		*head = crnt->next;
		if (crnt->next != NULL)
		{
			crnt->next->prev = NULL;
		}
		free(crnt);
		return (1);
	}
	for (j = 0; j < index; j++)
	{
		if (crnt->next == NULL)
			return (-1);
		crnt = crnt->next;
	}
	crnt->prev->next = crnt->next;
	if (crnt->next != NULL)
		crnt->next->prev = crnt->prev;
	free(crnt);
	return (1);
}
