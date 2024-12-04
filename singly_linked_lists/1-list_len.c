#include <stddef.h>
#include "lists.h"

/**
 * list_len - check the code
 * @h: const
 * Desc: print number nodes
 * Return: count
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
