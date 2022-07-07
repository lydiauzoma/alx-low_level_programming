#include "main.h"

/**
 * print_most_numbers -> this prints most number but 2 and 4
 */
void print_most_numbers(void)
{
	int c;

	for (c = 0; x < 10; c++)
	{
		if (c != 2 && c != 4)
			_putchar(c + '0');
	}
	_putchar('\n');
}
