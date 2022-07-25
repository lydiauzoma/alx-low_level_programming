#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup -> function returns a pointer
*@str: memory of a new string
*Return:NULL if sucess
*/
char *_strdup(char *str)
{
	char *s;
	int i, size;

	if (str == NULL)
	{
		return (NULL);
	}
	for (size = 0; str[size] != '\0'; size++)
		;
	s = malloc((sizeof(char) * size) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}
