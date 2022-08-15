#include "lists.h"

/**
 * add_nodeint_end -> function to add a node to the end of linked list
 * @head: pointer to the head of the list
 * @n: number to used as content
 *
 * Return: address of the newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nouvelle_node;
	listint_t *console = *head;

		nouvelle_node = malloc(sizeof(listint_t));
		if (nouvelle_node != NULL)
		{
			nouvelle_node->n = n;
			nouvelle_node->next = NULL;
		}
		else
			return (NULL);
		if (console != NULL)
		{
			while (console->next != NULL)
				console = console->next;

			console->next = nouvelle_node;
		}
		else
			*head = nouvelle_node;
		return (nouvelle_node);
}
