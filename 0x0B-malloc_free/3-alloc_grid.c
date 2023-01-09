#include "main.h"
#include <stdio.h>

/**
 * alloc_grid - prints a grid of integers
 * @width: width of 2 dim array
 * @height: height of 2 dim array
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **s, t, b;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(int *) * height);
	if (s == NULL)
	{
		return (NULL);
	}

	for (t = 0; t < height; t++)
	{
		s[t] = malloc(sizeof(int) * width);

		if (s[t] == NULL)
		{
			for (; t >= 0; t--)
			{
				free(s);
				return (NULL);
			}

			for (b = 0; b <= width; b++)
			{
				s[t][b] = 0;
			}
		}
		return (s);

	}
