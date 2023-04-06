#include "hash_tables.h"
/*@zinzinpolice*/
/**
 * key_index - function that gives you the index of a key.
 * @key: key to get index for
 * @size: size of the hash table
 *
 * Return: index for the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
