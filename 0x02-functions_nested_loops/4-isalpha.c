#include "main.h"
/*
 *  _isalpha - check alphabetical letters
 * @c:carater recibo por main.
 * Return: 1 if c is lowercase
 */
int _isalpha(int c)
if ((c >= 'a' && c <= 'z' || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
