#include  "main.h"
/**
 * _memcpy -> function that copies memory area
 * @dest: this is a pointer to the destination array
 * @src: this is pointer to the source of data
 * @n: this is the number of byted to be copied
 * Return: the content to be copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = scr[x];
	return (dest);
}
