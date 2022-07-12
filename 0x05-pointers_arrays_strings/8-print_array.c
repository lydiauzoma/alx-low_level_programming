#include "main.h"
#include <stdio.h>
/**
 * print_array -> print_array of digits
 * @a: array to print
 * @n: number of value to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%d", a[i]);
	if (i != n - 1)
	printf(", ");
	}
	printf("\n");
}
