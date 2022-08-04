#include "variadic_functions.h"

/**
* sum_them_all - sum of variadic variable
* @n: the amount of args
* Return: sum of its parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	va_list list;
	int sum = 0;

	if (n == 0)
	{
	return (0);
	}
	va_start(list, n);
	for (x = 0; x < n; x++)
	{
	sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
