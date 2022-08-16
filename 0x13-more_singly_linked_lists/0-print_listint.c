#include "lists.h"
/**
 *print_listint -> function prints all elements of a linked list
 *@h: pointer address
 *Return: the number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
