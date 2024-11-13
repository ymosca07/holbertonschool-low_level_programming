#include <stdlib.h>

/**
 * _strlen - check the desd
 * @str: string
 * Desc: cpy a string enter in parameter
 * Return: tab
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strdup - check the desd
 * @str: string
 * Desc: cpy a string enter in parameter
 * Return: tab
 */

char *_strdup(char *str)
{
	int i = 0;
	char *tab;

	tab = malloc(sizeof(char) * (_strlen(str) + 1));
	
	if (!tab)
	return (NULL);

	while (str[i] != '\0')
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
