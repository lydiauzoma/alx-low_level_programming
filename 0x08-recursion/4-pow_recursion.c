#include "main.h"
/**
 * _pow_recursion -> function to return x rised to the power of y
 * @x: parameter x^y
 * @y: power result
 * Return: return if success
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
