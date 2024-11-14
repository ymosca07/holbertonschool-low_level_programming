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
	unsigned int len1 = s1 ? _strlen(s1) : 0;
	unsigned int len2 = s2 ? _strlen(s2) : 0;
	unsigned int total_len = len1 + (n < len2 ? n : len2) + 1;

	tab = malloc(total_len);
	if (tab == NULL)
	return (NULL);

	while (i < len1)
	{
		tab[i] = s1[i];
		i++;
	}

	while (j < n && j < len2)
	{
		tab[i + j] = s2[j];
		j++;
	}
	tab[i + j] = '\0';

	return (tab);
}
