#include "main.h"
/**
 * _strcat -> function  overwriting the terminating null byte
 * @dest: first string
 * @src: second string
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
	int dec = 0, i;

	while (dest[dec])
		dec++;
	for (i = 0; src[i] != 0; i++)
	{
		dest[dec] = src[i];
		dec += 1;
	}
	dest[dec] = '\0'
		return (dest);
}
