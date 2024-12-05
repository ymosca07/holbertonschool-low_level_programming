#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - check the code
 * @h: struct
 * Desc: print
 * Return: count
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%u\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
