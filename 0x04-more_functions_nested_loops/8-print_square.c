#include "main.h"

/**
 * print_square -> check for a numbers
 * @size: integer params
 * Return:void
 */
void print_square(int size)
{
	int x, y;
	int size = 2;

	if (size <= 0)
	_putchar('\n');
	else
	{
	for (x = 0; x < size; x++)
	for (y = 0; y < size; y++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
}
