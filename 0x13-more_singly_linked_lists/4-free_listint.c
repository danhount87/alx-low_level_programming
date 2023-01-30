#include "lists.h"
/* @zinzinpolice */
/**
 * free_listint - function that frees a listint_t list.
 * @head: listint_t list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *tp;

	while (head)
	{
		tp = head->next;
		free(head);
		head = tp;
	}
}
