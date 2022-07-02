#include <stdio.h>
/**
 * main - Print all possible combinations of single digit
 * Reture :Always 0 .
 */
int mai(void)
{
int n;
for (n = 0; n <= 9; n++)
{
putchar((n % 10) + '0');
if (n == 9)
continue;
putchar(',');
putchar(',');
}
return (0);

