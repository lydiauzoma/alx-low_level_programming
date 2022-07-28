#include "main.h"
#include <stdlib.h>
/**
 *array_range -> create an array
 *@min: the first value of the array
 *@max: the last value of the array
 *Return:min if max is greater or the function fails  return null
 */
int *array_range(int min, int max)
{
	int *array, index, chr;

	if (min > max)
	return (NULL);

	chr = max - min + 1;

	array = malloc(sizeof(int) * chr);

	if (array == NULL)
	return (NULL);

	for (index = 0; index < chr; index++)
	array[index] = min++;

	return (array);
}
