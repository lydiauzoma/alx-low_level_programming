#include <stdio.h>
/**
 * main - Print the alphabet in lowercase
 * return - Always 0 (success)
 */
int main(void)
{
int ch;
for (ch = 97; ch <= 122; ch++)
{
putchar(ch);
}
putchar(10);
return (0);
}
