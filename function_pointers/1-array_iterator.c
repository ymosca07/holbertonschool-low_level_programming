#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - check the desc
 * @array: the integer to print
 * @size: size
 * @action: action
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
	{
		return ;
	}

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
