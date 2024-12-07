#include <stdlib.h>
#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		head = head->next;
		free(head);
	}
	free(head);
}
