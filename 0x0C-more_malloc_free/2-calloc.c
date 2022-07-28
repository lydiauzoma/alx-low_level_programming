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
	void *mem;
	char *scan;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size *nmemb);

		if (mem == NULL)
		return (NULL);
		scan = mem;

	for (index = 0; index < (size * nmemb); index++)
		scan[index] = '\0';
	return (mem);
}
