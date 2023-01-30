#include "lists.h"
/* @zinzinpolice */
/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position
 * @head: First node
 * @idx: Position of the new node
 * @n: Data of the new node
 * Return: the address of the new node,
 * or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tep;
	unsigned int j = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
		tep = *head;
		for (; j < idx - 1 && tep != NULL; j++)
			tep = tep->next;
		if (tep == NULL)
			return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = tep->next;
	tep->next = new_node;
	return (new_node);
}
