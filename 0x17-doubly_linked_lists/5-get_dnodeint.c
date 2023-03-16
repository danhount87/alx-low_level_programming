#include "lists.h"
/* @zinzinpolice */
/**
 * get_dnodeint_at_index - function that finds a
 * specific node of a linked list
 * @head: pointer
 * @index: index of the node to retrieve
 * Return: pointer to the indexed node, or NULL on failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int k;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	for (k = 0; k < index; k++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
