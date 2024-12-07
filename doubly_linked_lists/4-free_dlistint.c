#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - check the code
 * @head: struct
 * Desc: free
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		head = head->next;
		free(head);
	}
	free(head);
}
