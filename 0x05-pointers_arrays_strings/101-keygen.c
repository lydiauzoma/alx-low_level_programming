#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -> entry point 
 * Return: Alway 0.
 */
int main(void)
{
	int index = 0, sum = 0, diff1, diff2;
	char password[90];

	srand(time(0));

	while (sum < 2772)
	{
	password[index] = 33 + rand() % 94;
	sum += password[index++];
	}

	password[index] = '\0';

	if  (sum != 2772)
	{
	diff1 = (sum - 2772) / 2;
	diff2 = (sum - 2772) / 2;

	diff1++;


	for (index = 0; password[index]; index++)
	{
	if (password[index] >= (33 + diff1))
	{



	}
	}




	{
	}
	}
}
	printf("%s", password);
	return (0);
	}
