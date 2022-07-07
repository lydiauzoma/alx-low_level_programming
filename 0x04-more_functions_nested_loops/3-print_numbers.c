#include "main.h"

/**
 * print_number -> print number
 */
void print_numbers(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		if (j != 2 && j != 4)
			_putchar(j + '0');
	}
	_putchar('\n');
}
