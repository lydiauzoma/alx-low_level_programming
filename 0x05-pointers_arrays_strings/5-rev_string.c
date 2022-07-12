#include  "main.h"
/**
 *  rev_string -> function that reverses a string
 *  @s: string to be reversed
 */
void rev_string(char *s)
{
	int i = 0, n = 0;
	char tmp[1002];

	while (s[i] != '\0')
	i++;
	for (; i > 0; i--)
	{
	tmp[n] = s[i - 1];
	n++;
	}
	while (i < n)
	{
	s[i] = tmp[i];
	i++
	}
}
