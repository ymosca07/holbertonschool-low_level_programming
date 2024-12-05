#include <stdio.h>
#include "lists.h"

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
