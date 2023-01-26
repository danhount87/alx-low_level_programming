#include <stdio.h>
#include "lists.h"
/* @zinzinpolice */
/**
 * print_list - function that prints all the elements
 * @h: pointer
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t d = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		d++;
	}
	return (d);
}
