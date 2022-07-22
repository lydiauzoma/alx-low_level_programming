#include <stdio.h>
#define UNUSED(x)  (void)(x)


/**
 * main -> function to print it name
 * @argc: parameter
 * @argv: an array
 * Return: success 0
 */
int main (int argc, char **argv)
{
	UNUSED(argc);
	printf("%s\n" , argv[0]);
	return (0);
}
