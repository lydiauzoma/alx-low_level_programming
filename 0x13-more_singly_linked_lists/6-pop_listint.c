#include "lists.h"

/**
 * pop_listint -> fuction to deletes the head node in a linked list
 * @head: head of the list
 *
 * Return: the deleted node data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int console;

	if (*head == NULL)
	return (0);

	tmp = *head;
	console = (head)->n;
	*head = (*head)->next;

	free(tmp);

	return (console);
}
