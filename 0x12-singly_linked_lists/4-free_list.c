#include "lists.h"
/* @zinzinpolice */
/**
 * free_list - function that frees a list_t list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *tp;

	while (head)
	{
		tp = head->next;
		free(head->str);
		free(head);
		head = tp;
	}
}
