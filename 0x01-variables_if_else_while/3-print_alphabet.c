#include <stdio.h>
/**
 * main - prints the alphabet in lowercase than uppercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int ch;
for (ch = 97;; ch <= 122; ch++)
{
putchar(ch);
}
for (ch = 65; ch <= 90; ch++)
putchar(ch);
return (0);
}
