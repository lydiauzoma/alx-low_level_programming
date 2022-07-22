#include <stdio.h>
#include <stdlib.h>
/**
 *main ->  function  multiplies two 2 numbers
 *@argc:argc parameter
 *@argv: an array
 *Return: 1 if not passed and 0 otherwise
 */
int main(int argc, char *argv[])
{
	int result, x, y;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	result = x * y;

	printf("%d\n", result);
	return (0);
}
