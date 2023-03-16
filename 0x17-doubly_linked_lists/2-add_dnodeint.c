#include "lists.h"
#include <stdlib.h>
/* zinzinpolice */
/**
 * add_dnodeint - function that add a new node
 * at the beginning of the linked list
 * @head: double pointer
 * @n: value we are adding
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nwd;

	if (head == NULL)
		return (NULL);
	nwd = malloc(sizeof(dlistint_t));
	if (nwd == NULL)
		return (NULL);
	nwd->n = n;
	nwd->prev = NULL;
	nwd->next = *head;
	*head = nwd;
	if (nwd->next != NULL)
		(nwd->next)->prev = nwd;
	return (nwd);
}
