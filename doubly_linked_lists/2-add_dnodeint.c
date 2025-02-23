#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - check the code
 * @head: struct
 * @n: integer
 * Desc: print new node
 * Return: head
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *i;

	i = *head;
	i = malloc(sizeof(dlistint_t));
	if (i == NULL)
	{
		return (NULL);
	}
	i->n = n;
	i->next = *head;
	*head = i;
	return (*head);
}
