#include <stdio.h>
/**
 * main - Print alphabet expect q and e
 * return - Always 0 (success)
 */
int main(void)
{
char cha;
for (ch = 'a'; ch <= 'z'; ch++)
if (ch != 'q' && ch != 'e')
{
putchar (ch);
}
putchar (10);
return (0);
}

