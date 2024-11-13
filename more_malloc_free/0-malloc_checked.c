#include <stdlib.h>

/**
 * malloc_checked - check the code
 * @b: unsigned integer
 * Desc: check malloc
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(sizeof(int) * b);

	if (p == NULL)
	exit(98);

	return (p);
}
