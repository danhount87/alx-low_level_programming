#include "lists.h"
/* @zinzinpolice */
/**
 * add_nodeint - function that adds a new node
 * at the beginning of a listint_t list.
 * @head: pointer
 * @n: data to insert
 * Return: the address of the new element,
 * or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *prvw;

	prvw = malloc(sizeof(listint_t));
	if (prvw == NULL)
		return (NULL);

	prvw->n = n;
	prvw->next = *head;
	*head = prvw;
	return (*head);
}
