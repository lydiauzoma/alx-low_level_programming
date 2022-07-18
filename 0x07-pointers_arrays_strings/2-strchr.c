#include "main.h"
/**
 * _strchr -> this  string to be scanned
 * @s: the character to be searched in str
 * @c: another character to be searched in str
 * Return: a string
 */
char *_strchr(char *s, char c)
{
	int x;

	while (1)
	{
		x = *s++;
		if (x == c)
		{
			return (s - 1);
		}
		if (x == 0)
		{
			return (s);
		}
	}
}
