#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
if (ch != 'q' && ch != 'e')
{
putchar (ch);
}
putchar (10);
return (0);
}

