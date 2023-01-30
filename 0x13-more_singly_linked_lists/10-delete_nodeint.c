#include "lists.h"
/* @zinzinpolice */
/**
 * delete_nodeint_at_index - function that deletes the node
 * at index index of a listint_t linked list.
 * @head: pointer to the first element
 * @index: index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tep = *head;
	listint_t *current = NULL;
	unsigned int j = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tep);
		return (1);
	}

	while (j < index - 1)
	{
		if (!tep || !(tep->next))
			return (-1);
		tep = tep->next;
		j++;
	}
	current = tep->next;
	tep->next = current->next;
	free(current);

	return (1);
}
