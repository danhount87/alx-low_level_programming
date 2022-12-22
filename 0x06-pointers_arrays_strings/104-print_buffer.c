#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 */

void print_buffer(char *b, int size)
{
	int g, k, h, c;

	g = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (g < size)
	{
		k = size - g < 10 ? size - g : 10;
		printf("%08x: ", g);
		for (h = 0; h < 10; h++)
		{
			if (h < k)
				printf("%02x", *(b + g + h));
			else
				printf("  ");
			if (h % 2)
			{
				printf(" ");
			}
		}
		for (h = 0; h < k; h++)
		{
			c = *(b + g + h);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		g += 10;
	}
}
