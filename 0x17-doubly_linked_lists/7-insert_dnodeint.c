#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/* @zinzinpolice */
/**
 * insert_dnodeint_at_index - function that inserts
 * a new node at a given position
 * @h: double pointer
 * @idx: index
 * @n: data to enter into new node
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nwd, *next, *crnt;
	unsigned int j;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		crnt = *h;
		for (j = 0; j < idx - 1 && crnt != NULL; j++)
			crnt = crnt->next;
		if (crnt == NULL)
			return (NULL);
	}
	nwd = malloc(sizeof(dlistint_t));
	if (nwd == NULL)
		return (NULL);
	nwd->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = nwd;
		nwd->prev = NULL;
	}
	else
	{
		nwd->prev = crnt;
		next = crnt->next;
		crnt->next = nwd;
	}
	nwd->next = next;
	if (nwd->next != NULL)
		nwd->next->prev = nwd;
	return (nwd);
}
