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
	const listint_t *pub;
	unsigned int ctr = 0;

	pub = h;
	while (pub)
	{
		printf("%d\n", pub->n);
		ctr++;
		pub = pub->next;
	}
	return (ctr);
}
