#include <stdlib.h>
/**
 * print_name - prints a name.
 * @name: input name.
 * @f: function to execut
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
