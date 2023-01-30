#include "lists.h"
/* @zinzinpolice */
/**
 * sum_listint - function that returns the sum of
 * all the data
 * @head: Address of the first node
 * Return: result
 */

int sum_listint(listint_t *head)
{
	int ttl = 0;

	while (head != NULL)
	{
		ttl += head->n;
		head = head->next;
	}
	return (ttl);
}
