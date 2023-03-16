#include "lists.h"
#include <stdlib.h>
/* @zinzinpolice */
/**
 * free_dlistint - function that free a dlistint_t list
 * @head: pointer
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nwd;

	while (head != NULL)
	{
		nwd = head->nwd;
		free(head);
		head = nwd;
	}
}
