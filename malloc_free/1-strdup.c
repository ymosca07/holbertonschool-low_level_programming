#include <stdlib.h>

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

	tab = malloc(sizeof(*tab) * (*str));

	while (str[i] != '\0')
	{
		tab[i] = str[i];
		i++;
	}
	return (tab);
}
