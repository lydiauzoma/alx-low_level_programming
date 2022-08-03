#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index -> search for an integer
 * @array: input integer array
 * @size: size of the array
 * @cmp: pointer to the fuction
 *Return:index of interger
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;
	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (x = 0; x < size; x++)
	{
	if (cmp(array[x]) == 1)
	{
	return (x);
	}
	}
	return(-1);
	}
