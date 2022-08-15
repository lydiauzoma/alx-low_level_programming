#include "lists.h"

/**
 * free_listint -> function to free a linked list
 * @head: a pointer address  of head of the list
 * Return:void
 */
 void free_listint(listint_t *head)
{
	listint_t *nemp

	while (head != NULL)
	{
		nemp = head;
		head = head->next;
		free(temp);
	}
}
