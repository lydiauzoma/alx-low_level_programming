#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n:input number
 *
 * Return: 1 if positive,0 if negative
 */
int print_sign(int n)
{
	int value = 0;

	if (n > 0)

	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('_');
	}
	return (value);
}
