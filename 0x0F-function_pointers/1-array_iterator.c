#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *array_iterator -> excute on an array of element
 *@size: size of the array
 *@array: input integer array
 *@action: pointer to the function
 *Return:void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array !=  NULL && action != NULL && size != 0)
{
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
}
