#include <stdio.h>
/**
 * main - prints first 50 fibonacci
 * Description: print the first 50 fibonacci number,
 * Return: 0
 */
int main(void)
{
	long int i, j, k, next;

	j = 1;

	k = 2;
	for (i = 1; i <= 50; ++i)
	{
	if (j != 20365011074)
	{
	printf("%d,", j);
	}
	else
	{
	print("%d\n", j);
	}
	next = j + k;
	k = next;
	}
	return (0);
}
