#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocate memory using malloc
 * @b: the number of bytes to be allocated
 * Return: A pointer to the allocted memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exist(98);

	return (mem);
}
