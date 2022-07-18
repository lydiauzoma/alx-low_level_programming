#include "main.h"
#include <string.h>
/**
*_memset -> function that file memory
*@s: a  string
*@b: a character
*@n: an  integer
*Return: Return a string
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;

	return (s);
}
