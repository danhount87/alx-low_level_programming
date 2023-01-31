#include "lists.h"
/* @zinzinpolice */
/**
 * reverse_listint - function that reverses
 * a listint_t linked list.
 * @head: pointer
 * Return: pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *avnt = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = avnt;
		avnt = *head;
		*head = next;
	}
	*head = avnt;
	return (*head);
}
