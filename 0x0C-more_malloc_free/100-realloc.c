#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer
 *@old_size: int
 *@new_size: int
 *
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a, *b;
	unsigned int i;

	if (ptr == NULL)
	{
		a = malloc(new_size);
		if (a == NULL)
		{
			return (NULL);
		}
		return (a);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
		if (new_size == old_size)
		{
			return (ptr);
		}
	b = ptr;
	a = malloc(new_size);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < old_size; i++)
	{
		a[i] = b[i];
	}
	free(ptr);
	return (a);
}
