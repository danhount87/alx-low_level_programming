#include "lists.h"
/* @zinzinpolice */
/**
 * add_nodeint_end - function that adds a new node
 * at the end of a listint_t list.
 * @head: pointer
 * @n: data to insert in the new element
 * Return: the address of the new element,
 * or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tp->next)
		tp = tp->next;
	tp->next = new;
	return (new);
}
