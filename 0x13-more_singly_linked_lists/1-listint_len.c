#include "lists.h"
/* @zinzinpolice */
/**
 * listint_len - function that returns
 * the number of elements in a linked lists
 * @h: linked list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t publ = 0;

	while (h)
	{
		publ++;
		h = h->next;
	}
	return (publ);
}
