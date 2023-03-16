#include "lists.h"
/* @zinzinpolice */
/**
 * dlistint_len - function that returns the
 * number of elements in a linked dlistint_t list
 * @h: pointer
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t j;

	for (j = 0; h != NULL; j++)
		h = h->next;
	return (j);
}
