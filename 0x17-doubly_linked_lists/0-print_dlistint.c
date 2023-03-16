#include "lists.h"
#include <stdio.h>
/* @zinzinpolice */
/**
 * print_dlistint - function that prints all the
 * elements of a dlistint_t list
 * @h: pointer
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t j;

	for (j = 0; h != NULL; j++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (j);
}
