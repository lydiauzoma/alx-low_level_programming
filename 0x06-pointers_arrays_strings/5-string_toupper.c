#include "main.h"
/**
 * string_toupper -> converting any string to upper case
 * @y: string parameter 1
 * Return: string
 */
char *string_toupper(char *y)
{
	int y = 0;

	while (y[i])
	{
		if (y[i] >= 97 && y[i] <= 122)
			y[i] = y[i] - 32;
		i++;
	}
	return (y);
