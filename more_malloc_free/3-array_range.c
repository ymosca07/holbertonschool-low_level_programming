#include <stdlib.h>

/**
 * array_range - check the desc
 * @min: integer
 * @max: integer
 * Desc: between min and max
 * Return: tab
 */

int *array_range(int min, int max)
{
	int *tab;
	int i = 0;

	if (min > max)
	return (NULL);

	tab = malloc(sizeof(int) * (max - min + 1));

	if (tab == NULL)
	return (NULL);

	while (min <= max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
