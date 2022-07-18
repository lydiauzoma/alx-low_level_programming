#include "main.h"
/**
 * _strstr -> function find the first occurrance of substring
 * @haystack: this is the main string to be scanned
 * @needle: the small string to be searched with-in haystack
 * Return: char value
 */
char *_strstr(char *haystack, char *needle)
{
	int x = 0, y = 0;

	while (haystack[x])
	{
		while (needle[y])
		{
			if (haystack[x + y] != needle[y])
			{
				continue;
			}
			y++;
		}

		if (needle[y] == '\0')
		{
			return (haystack + x);
		}
		x++;
	}
	return ('\0');
}
