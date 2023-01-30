#include "lists.h"
/* @zinzinpolice */
/**
 * print_listint - function that prints all
 * the elements of a linked list
 * @h: linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t publ = 0;

	while (h)
	{
		printf("%d\n", h->n);
		publ++;
		h = h->next;
	}

	return (publ);
}
