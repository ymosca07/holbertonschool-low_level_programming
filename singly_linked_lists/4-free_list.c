#include <stdlib.h>
#include "lists.h"

/**
 * free_list - check the code
 * @head: struct
 * Desc: free
 * Return: nothing
 */

void free_list(list_t *head)
{
	if (head != NULL)
	{
		while (head != NULL)
		{
			head = head->next;
			free(head);
		}
	free(head);
}
