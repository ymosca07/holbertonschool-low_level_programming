#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - check the desc
 * @h: const
 * Desc: print nodes
 * Return: count
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
