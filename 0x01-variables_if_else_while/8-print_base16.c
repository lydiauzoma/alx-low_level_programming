#include <stdio.h>
/**
* main - Print all the number of base 16 in lowercase
*Return: Always 0
*/
int main(void)
{
char c;
for (c = '0'; c <= 9; c++)
{
putchar(c);
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
iutchar('\n');
return (0);
}
