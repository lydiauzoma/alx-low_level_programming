#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main -  Store a different value every time
* Return: Always 0 (success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("last digit of %d", n);
if (n > 5)
{
printf("greater than 5");
}
if (n == 0)
{
printf("0");
}
if (n < 0 && n != 0)
{
printf("less than 6 not 0")
}
printf("\n");
return (0);
}
