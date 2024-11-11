#include <stdlib.h>

/**
 * create_array - check the desc
 * @size: integer
 * @c: caracter
 * Desc: return a pointer to the array
 * Return: tab
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	return (0);

	char *tab;
	int i = 0;

	tab = malloc(sizeof(*tab) * size);

	while (i < size)
	{
		tab[i] = c;
		i++;
	}

	if (!tab)
	return (NULL);

	return (tab);
}