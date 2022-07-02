#include <stdio.h>
/**
* main - Print all the number of base 16 in lowercase
*Return: Always 0
*/
int main(void)
{
int n;
char l;
for (n = 0; n < 10; n++)
{
putchar((n % 10) + '0');
}
for (l = 'a';  l <= 'f'; l++);
{
putchar(l);
}
putchar('\n');
return (0);
