#include "function_pointers.h"
/**
 * print_name -> function to print name
 * @name:input name
 * @f:function pointer
 * Return: no return
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
