#include <stdio.h>
#include <stdlib.h>
/**
 * main -> adds positive numbers
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: 0 on success,
 */
int main(int argc, char *argv[])
{
	int x, j, num = 0;

	for (x = 1; x < argc; x++)
	{
		for (j = 0; argv[x][j] != '\0'; j++)
		{
			if (argv[x][j] < '0' || argv[x][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		num += atoi(argv[x]);
	}
		printf("%d\n", num);
		return (0);
}
