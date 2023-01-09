#include "main.h"
#include <stdlib.h>

/**
 * cnt_wrd - help function to count
 * the number of words in a string.
 * @s: string to evaluate
 * Return: the numb of words
 */

int cnt_wrd(char *s)
{
	int gal, b, y;

	gal = 0;
	y = 0;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] == ' ')
			gal = 0;
		else if (gal == 0)
		{
			gal = 1;
			y++;
		}
	}

	return (y);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array od strings
 */
char **strtow(char *str)
{
	char **mtx, *tmp;
	int i, k = 0, l = 0, wods, c = 0, begin, end;

	while (*(str + l))
		l++;
	wods = cnt_wrd(str);
	if (wods == 0)
		return (NULL);

	for (i = 0; i <= l; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (begin < end)
					*tmp++ = str[begin++];
				*tmp = '\0';
				mtx[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			begin = i;
	}

	mtx[k] = NULL;

	return (mtx);
}
