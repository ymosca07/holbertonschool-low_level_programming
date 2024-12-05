#include "lists.h"
#include <stddef.h>

/**
 * dlistint_len - check the code
 * @h: struct
 * Desc: count lenght
 * Return: count
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
