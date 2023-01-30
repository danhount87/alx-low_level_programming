#include "lists.h"
/* @zinzinpolice */
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer to the listint_t
 */

void free_listint2(listint_t **head)
{
	listint_t *tp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		tp = (*head)->next;
		free(*head);
		*head = tp;
	}
}
