#include <stdlib.h>

/**
 * _calloc - check the code
 * @nmemb: integer
 * @size: integer
 * Desc: calloc
 * Return: tab
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *tab;

	if (nmemb == 0 || size == 0)
	return (NULL);

	tab = calloc(nmemb, size);

	if (tab == NULL)
	return (NULL);

	return (tab);
}
