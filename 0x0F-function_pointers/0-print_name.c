#include <stdlib.h>

/**
<<<<<<< HEAD
 * print_name - prints a name.
 * @name: input name.
 * @f: function to execute
=======
 * print_name - execute a function given as a parameter
 * @name: parameter that function ptr needs
 * @f:function to execute
>>>>>>> 290646aba3b8571facd449cac80003a4b4017f5d
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
