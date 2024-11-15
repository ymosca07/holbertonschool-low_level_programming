#include <stdlib.h>

/**
 * malloc_checked - check the code
 * @b: unsigned integer
 * Desc: check malloc
 * Return: p
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		free(p);
		exit(98);
	}

	return (p);
}
