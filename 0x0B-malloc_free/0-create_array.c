#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: number elements array
 * @c: character
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *fub;
	unsigned int notice;

	if (size == 0)
	{
		return (NULL);
	}

	/*we will define the values with malloc right below*/
	fub = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}

	else
	{
		notice = 0;
		while (notice < size)
		{
			*(fub + notice) = c;
			notice++;
		}

		return (fub);
	}

}
