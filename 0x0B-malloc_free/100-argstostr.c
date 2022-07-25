#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *argstostr -> function that concatenates all the arguments
 *@ac: integer parameter
 *@av: array parameter
 *Return: array
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int w, x, y, z;

	y = 0;
	z = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (w = 0; w < ac; w++)
	{
	for (x = 0; av[w][x] != '\0'; x++)
	{
		z++;
	}
	}
	str = malloc(z * sizeof(char) + ac + 1);
	if (!str)
	{
		return (NULL);
	}
	for (w = 0; w < ac; w++)
	{
		for (x = 0; av[w][x] != '\0'; x++, y++)
		{
			str[y] = av[w][x];
		}
		str[y] = '\n';
		y++;
	}
	str[y] = '\0';
	return (str);
}
