#include "lists.h"
/* @zinzinpolice */
/**
 * sum_dlistint - function that returns the sums
 * all of the data of a dlistint_t linked list
 * @head: pointer
 * Return: sum of all data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int pupo = 0;

	while (head != NULL)
	{
		pupo += head->n;
		head = head->next;
	}
	return (pupo);
}
