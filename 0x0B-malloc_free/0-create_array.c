#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*create_array -> function to print an array of char
*@size:the memory of address to print
*@c: the memory of address to print
*Return:NULL if size is 0
*/
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *y;

	if (size == 0)
		return (NULL);
	y = (char *)malloc(size * sizeof(char));
	if (y == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		y[x] = c;
	return (y);
}
