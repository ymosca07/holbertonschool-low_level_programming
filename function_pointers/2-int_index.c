#include "function_pointers.h"

/**
 * int_index - check the code
 * @array: integer
 * @size: integer
 * @cmp: function
 * Return: integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	return (-1);

	while (i < size && array != NULL && cmp != NULL)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
