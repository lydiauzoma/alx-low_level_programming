#include "main.h"
/**
 *factorial -> function to return factional of a number
 *@n: number parameter
 *Return: an integer
 */
int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
