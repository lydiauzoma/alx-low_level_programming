#include <stdio.h>
/**
 * main - program entry point
 * Return: 0 on success .error code otherwise
 */
int main(void)
{
int c;
int d = 0;
while (d < 10)
{
c = 0;
while (c < 10)
{
if (d != c && d < c)
{
putchar('0' + d);
putchar('0' + c);
if (c + d != 17)
{
putchar(',');
putchar(' ');
}
}
c++;
}
d++;
}
putchar('\n');
return (0);
}

