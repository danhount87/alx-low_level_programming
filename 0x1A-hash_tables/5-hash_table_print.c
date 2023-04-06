#include "hash_tables.h"
/*@zinzinpolice*/
/**
 * hash_table_print - function that prints a hash table.
 * @ht: hash table to print
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int j;
	hash_node_t *tmp;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (j = 0; j < ht->size; j++)
	{
		tmp = ht->array[j];
		while (tmp != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
