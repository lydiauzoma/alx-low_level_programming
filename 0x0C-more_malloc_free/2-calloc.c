#include "main.h"
#include <stdlib.h>

/**
 *_calloc -> function allocates memory for array
 *@nmemb:The number of element
 *@size:The byte size of each array
 *Return: if nmemb = 0 , size = 0 or function fails = NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	a = malloc(size * nmemb);
	if (a == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		a[i] = '\0';
	}
	return (a);
}
