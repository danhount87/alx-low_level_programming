#include "lists.h"
/* @zinzinpolice */
/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: pointer
 * Return: the size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int sou;
	listint_t *tep;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		sou = *h - (*h)->next;
		if (sou > 0)
		{
			tep = (*h)->next;
			free(*h);
			*h = tep;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
