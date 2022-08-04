#include "variadic_functions.h"
/**
* print_all - Entry Point
* c = char, i = int, f = float, s = char * (if null print (nil))
* @format: list of arg types
* Return: 0
*/
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, j = 0;
	char *sep = ", ";
	char *str;

	va_start(list, format);
	while (format && format[i])
	i++;
	while (format && format[j])
	{
	if (j == (i - 1))
	{
	sep = "";
	}
	switch (format[j])
	{
	case 'c':
	printf("%c%s", va_arg(list, int), sep);
	break;
	case 'i':
	printf("%d%s", va_arg(list, int), sep);
	break;
	case 'f':
	printf("%f%s", va_arg(list, double), sep);
	break;
	case 's':
	str = va_arg(list, char *);
	if (str == NULL)
	str = "(nil)";
	printf("%s%s", str, sep);
	break;
	}
	j++;
	}
	printf("\n");
	va_end(list);
}
