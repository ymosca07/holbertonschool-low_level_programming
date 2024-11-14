#include <stdlib.h>
#include <unistd.h>

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
	exit(98);

	write(1, "\n", 1);
	return (p);
}
