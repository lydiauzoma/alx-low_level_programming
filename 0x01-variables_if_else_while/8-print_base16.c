#include <stdio.h>
/**
* main - Print all the number of base 16 in lowercase
*Return: Always 0
*/
int main(void)
{
int n;
char ch;
for (n = 48; n <= 57; n++)
{
putchar(n);
}
for (ch = 'a'; ch <= 'f'; ch++);
{
putchar(ch);
}
putchar(10);
return (0);
