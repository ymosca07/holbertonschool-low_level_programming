#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(sizeof(int) * b);

	if (!p)
	exit(98);
}
