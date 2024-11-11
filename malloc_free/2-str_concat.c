#include <stdlib.h>

/**
 * str_concat - check the desc
 * @s1: string
 * @s2: string
 * Desc: concatenates two strings with malloc
 * Return: tab
 */

char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL || s2 == NULL)
	return (0);

	int i = 0;
	int j = 0;
	char *tab;

	tab = malloc(sizeof(*s1) * (*s1 + *s2 + 1));

	if (!tab)
	return (NULL);

	while (s1[i] != '\0')
	{
		tab[i + j] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		tab[i + j] = s2[j];
		j++;
	}

	return (tab);
}
