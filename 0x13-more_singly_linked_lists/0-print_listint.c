#include "lists.h"
/**
 * print_listint -> function prints all elements of a linked list
 * @h pointer address 
 * Return: the number of node 
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *console = h;
	size_t count = 0;

	while (console != NULL)
	{
		printf("%d\n", console->n);
		count += 1;
		console = console->next;
	}
	return (count);
}
