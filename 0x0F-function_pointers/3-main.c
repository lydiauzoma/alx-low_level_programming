#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - performs simple operations
* @argc: has the length of the arguments
* @argv: has the arguments
* Return: 0
*/
int main(int argc, char *argv[])
{

	int a, b;

	int (*operation)(int, int);

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}
	if (argv[2][1])
	{
	printf("Error\n");
	exit(99);
	}
	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
	printf("Error\n");
	exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", operation(a, b));
	return (0);
}
