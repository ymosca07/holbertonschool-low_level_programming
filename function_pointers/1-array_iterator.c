#include <stddef.h>
#include "main.c"

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action != NULL)
	{
		action(*array);
	}
}
