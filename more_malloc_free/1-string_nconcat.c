#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - check the code
 * @s1: string
 * @s2: string
 * @n: integer
 * Desc: concatenates
 * Return: tab
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *tab;
	unsigned int i = 0;
	unsigned int j = 0;

	if (n >= _strlen(s2))
	{
		tab = malloc(_strlen(s1) + _strlen(s2) + 1);

		if (tab == NULL)
		return (NULL);
	}

	if (n < _strlen(s2))
	{
		tab = malloc(_strlen(s1) + n + 1);
		if (tab == NULL)
		return (NULL);
	}

	while (s1[i] != '\0')
	{
		tab[i] = s1[i];
		i++;
	}

	while (j < n)
	{
		tab[i + j] = s2[j];
		j++;
	}
	tab[i + j] = '\0';

	return (tab);
}
