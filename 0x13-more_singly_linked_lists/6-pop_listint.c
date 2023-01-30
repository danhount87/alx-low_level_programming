#include "lists.h"
/* @zinzinpolice */
/**
 * pop_listint - function that deletes the head node
 * @head: pointer to the first element
 * Return: the data inside the elements that was deleted,
 *  * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tep;
	int nbr;

	if (!head || !*head)
		return (0);

	nbr = (*head)->n;
	tep = (*head)->next;
	free(*head);
	*head = tep;

	return (nbr);
}
