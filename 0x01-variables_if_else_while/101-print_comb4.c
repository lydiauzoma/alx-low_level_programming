#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
int a, b, c,;
for (b = a + 1; b < 9; b++)
{
for (b = a + 1; b < 9; b++)
{
for (c = b + 1; c < 10; c++)
{
putchar((a % 10) + '0');
putchar((b % 10) + '0');
putchar((c % 10) + '0');
if (a == 7 && b == 8 && c == 9)
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
