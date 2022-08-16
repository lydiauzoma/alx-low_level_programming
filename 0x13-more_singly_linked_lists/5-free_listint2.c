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


	if (head  == NULL)
		return;
	
	while (*head)
	{
		console = (*head)->next;
		free(*head);
		*head = console;
	}
	head  = NULL;
}
