#include "main.h"
/**
 * _strpbrk -> string to be scanned
 * @s: source string
 * @accept:accepted charater
 * Return:return the string
 */
char *_strpbrk(char *s, char *accept)
{
	int x = 0, y;

	while (s[x])
	{
		y = 0;

		while (accept[y])
		{
			if (s[x] == accept[y])
			{
				s += x;
				return (s);
			}
			y++;
		}
		x++;
	}
	return ('\0');
}
