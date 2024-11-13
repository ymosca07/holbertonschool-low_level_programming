#include <stdlib.h>

/**
 * _strlen - check the desc
 * @str: string
 * Desc: concatenates two strings with malloc
 * Return: tab
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] == '\0')
	{
		i++;
	}
	return (i);
}

/**
 * str_concat - check the desc
 * @s1: string
 * @s2: string
 * Desc: concatenates two strings with malloc
 * Return: tab
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *tab;

	if (s1 == NULL || s2 == NULL)
	return (NULL);

	tab = malloc(sizeof(char) * (_strlen(s1) + (_strlen(s1) + 1)));

	if (tab == NULL)
	return (NULL);

	while (s1[i] != '\0')
	{
		tab[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		tab[i + j] = s2[j];
		j++;
	}
	tab[i + j] = '\0';

	return (tab);
}
