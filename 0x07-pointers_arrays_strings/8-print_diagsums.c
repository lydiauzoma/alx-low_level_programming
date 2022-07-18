#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -> print the sum of two diagonals
 * @a:the parameter
 * @size: the size
 */
void print_diagsums(int *a, int size)
{
	int x, num1 = 0, num2 = 0;

	for (x = 0; x < size; x++)
	{
		num1 += a[(size + 1) * x];
		num2 += a[(size - 1) * (x + 1)];
	}

	printf("%d, %d\n", num1, num2);
}
