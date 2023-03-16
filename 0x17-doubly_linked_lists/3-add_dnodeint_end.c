#include "lists.h"
#include <stdlib.h>
/* @zinzinpolice */
/**
 * add_dnodeint_end - function that adds a node to the
 * end of a linked list
 * @head: double pointer
 * @n: value to add to new node
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nwd, *tpa;

	if (head == NULL)
		return (NULL);
	nwd = malloc(sizeof(dlistint_t));
	if (nwd == NULL)
		return (NULL);
	nwd->n = n;
	nwd->next = NULL;
	if (*head == NULL)
	{
		nwd->prev = NULL;
		*head = nwd;
		return (nwd);
	}
	tpa = *head;
	while (tpa->next != NULL)
		tpa = tpa->next;
	tpa->next = nwd;
	nwd->prev = tpa;
	return (nwd);
}
