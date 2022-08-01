#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog -> function to free the dogs
 *@d: struct dog
 *Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
{
	free(d->name);
	free(d->owner);
	free(d);
}
}
