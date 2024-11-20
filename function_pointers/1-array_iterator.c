#include <stddef.h>

/**
 * array_iterator - check the desc
 * @array: the integer to print
 * @size: size
 * @action: action
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

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
