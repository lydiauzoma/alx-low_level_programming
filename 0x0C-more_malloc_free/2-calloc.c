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
	void *non;
	char *scan;
	unsigned int index;

	if (nmemb == 0 || size == 0)

		if (non == NULL)
			return (NULL);
	scan = non;

	for (index = 0; index < (size * nmemb); index++)
		scan[index] = '\0';
	return (non);
}
