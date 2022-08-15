#include "lists.h"

/**
 * free_listint2 -> frees a linked list
 *@head: pointer to the head of the list
 *
 *Return: return nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *console;
	listint_t **nemp = head;

	if (nemp != NULL)
	{
	while (*head != NULL)
	{
		console = *head;
		free(console);
		*head = (*head)->next;
	}
	*nemp = NULL;
	}
}
