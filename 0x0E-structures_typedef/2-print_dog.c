#include "dog.h"
#include <stdio.h>
/**
 * print_dog -> prints a struct dog
 * @d: struct dog
 * Return:nothing
 */
void print_dog(struct dog *d)

{
	if (d != NULL)
	{
	printf("Name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
	}
}
