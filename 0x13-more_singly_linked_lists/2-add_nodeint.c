#include "lists.h"
/**
 * add_nodeint -> to add a new at the beginning of a listint_t list
 *@head: a pointer to the address
 *@n: the integer of the new node
 *
 * Return: NULL if function fails
 * or address of element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nouvelle;

	nouvelle = malloc(sizeof(listint_t));
	if (nouvelle == NULL)
		return (NULL);

	nouvelle->n = n;
	nouvelle->next = *head;

	*head = nouvelle;

	return (nouvelle);
}
