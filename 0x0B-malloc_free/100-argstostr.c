#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments
 * of your program.
 * @ac: number of arguments
 * @av: array of pointer
 * Return: the arguments
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int cnt = 0, x = 0, y = 0, z = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (x < ac)
	{
		y = 0;
		while (av[x][y] != '\0')
		{
			cnt++;
			y++;
		}
		x++;
	}
	cnt = cnt + ac + 1;
	str = malloc(sizeof(char) * cnt);
	if (str == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			str[z] = av[x][y];
			z++;
		}
		str[z] = '\n';
		z++;
	}
	return (str);
}
