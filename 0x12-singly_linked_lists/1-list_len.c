#include "lists.h"
/* @zinzinpolice */
/**
 * list_len - function that returns the
 * number of elements
 * @h: pointer
 * Return: integer
 */

size_t list_len(const list_t *h)
{
	const list_t *tp;
	unsigned int ctr = 0;

	tp = h;
	while (tp)
	{
		ctr++;
		tp = tp->next;
	}
	return (ctr);
}
