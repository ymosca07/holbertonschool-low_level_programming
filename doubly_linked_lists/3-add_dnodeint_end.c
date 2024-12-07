#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - check the code
 * @head: struct
 * @n: integer
 * Desc: add node
 * Return: head
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	current = *head;

	while (current->next != NULL)
		current = current->next;
	current->next = new;
	return (*head);
}
