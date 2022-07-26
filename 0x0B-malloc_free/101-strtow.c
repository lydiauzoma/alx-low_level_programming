#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *deccount -> counts the number of words in a string
 * @str: string parameter
 * Return:number of words
 */
int deccount(char *str)
{
	int i, decs = 0, f = 0;

	for (i = 0; str[i]; i++)
	{
	if (str[i] == ' ')
	{
	f = 0;
	}
	else if (!f)
	{
		f = 1;
		decs++;
	}
	}
	return (decs);
}


/**
 * strtow -> slipt a string into words
 * @str:string
 * Return: pointer to an array
 */

char **strtow(char *str)
{
	int i, r = 0, decs;
	char **chr;

	if (str == NULL)
		return (NULL);
	 decs = deccount(str);
	if (!decs)
		return (NULL);
	chr = malloc((decs + 1) * sizeof(*chr));
	if (chr == NULL)
	return (NULL);
	while (*str)
	{
	if (*str == ' ')
	{
	str += 1;
	continue;
	}
	for (i = 0; str[i] != ' ' && str[i] != '\0'; i++)
	;
	chr[r] = malloc(i + 1);
	if (chr[r] == NULL)
	{
	for (i = 0; i < r; i++)
	free(chr[i]);
	free(chr);
	return (NULL);
	}
	for (i = 0; str[i] != ' ' && str[i] != '\0'; i++)
	chr[r][i] = str[i];
	chr[r][i] = '\0';
	r++;
	str += i;
	}
	chr[r] = NULL;
	return (chr);
}

