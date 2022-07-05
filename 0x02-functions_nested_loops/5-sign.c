#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n:input number
 *
 * Return: 1 if positive,0 if negative
 */
int print_sign(int n)
{
	if (n > 0)

	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return ('0');
	}
	else
		_putchar('_');
		return (-1);
	}
}
