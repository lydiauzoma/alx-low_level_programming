#include "main.h"



/**
* binary_to_uint - Converts a binary number to an unsigned int.
* @b: A pointer to a string of 0 and 1 chars.
*
* Return: If b is NULL or contains chars not 0 or 1 - 0.
*         Otherwise - the converted number.
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int sign = 0;

	int len1 = 0;

	if (b[len1] == '\0')
	return (0);

	while ((b[len1] == '0') || (b[len1] == '1'))
	{
		sign <<= 1;
		sign += b[len1] - '0';
		len1++;
	}
	return (sign);
}
