#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: 1
 */
int main(void)
{
int s = strlen("and that piece of art is useful-Dora korpar, 2015-10-19\n"s);
write(2, "and that piece of art is useful\"- Dora korpar,2015-10-19\n"s);
return (1);
}
