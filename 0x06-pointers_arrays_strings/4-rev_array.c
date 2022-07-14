#include "main.h"

/**
 * reverse_array -> function reversing an array
 * @a: array a
 * @n: an element of  an array
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
	tmp = a[i];
	a[i] = a[j];
	a[j--] = tmp;
	}
}
