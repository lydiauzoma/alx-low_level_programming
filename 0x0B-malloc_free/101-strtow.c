#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * decogn -> counts the number of words in a string
 * @s: string parameter
 * Return:number of words
 */
int decogn(char *s)
{
	int i, n = 0;

	for (i = 0; s[i]; i++)
	{
	if (s[i] == ' ')
	{
	if (s[i + 1] != ' ' && s[i + 1] != '\0')
	{
		n++;
	}
	else if (i == 0)
	{
		n++;
	}
	}
	n++;
		return (n);
	}

/**
 * strtow -> slipt a string into words
 * @str:string
 * Return: pointer to an array
 */

char **strtow(char *str)
{
	int a, b, c, d, e = 0, f = 0;
	char **x;

	if (str == NULL || *str == '\0')
	return (NULL);
	e = decogn(str);
	if (e == 1)
	return (NULL);
	x = (char **)malloc(e * sizeof(char *));
	if (x == NULL)
	return (NULL);
	x[e - 1] = NULL;
	a = 0;
	while (str[a])
	{
	if (str[a] != ' ' && (a == 0 || str[a - 1] == ' '))
	{
	for (b = 1; str[a + b] != ' ' && str[a + b]; b++)
				;
	b++;
	x[f] = (char *)malloc(b * size(char));
	b--;
	x([f] == NULL)
	{
	for (c = 0; c < f; c++)
	free(x[c]);
	free(x[e - 1]);
	free(x);
	return (NULL);
	}
	for (d = 0; d < b; d++)
	x[f][d] = str[a + d];
	x[f][d] = '\0';
	f++;
	a += b;
	}
	else
	a++;
	}
	return (x);
	}
}
