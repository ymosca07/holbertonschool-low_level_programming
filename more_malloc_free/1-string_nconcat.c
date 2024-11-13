#include <stdlib.h>

/**
 * _strlen - check the code
 * @str: string
 * Desc: count string
 * Return: i
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
 * string_nconcat - check the desc
 * @s1: string
 * @s2: string
 * @n: integer
 * Desc: concatenates
 * Return: str
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	int j = 0;
	char *str;

	str = malloc(_strlen(s1) + (n < _strlen(s2) ? n : _strlen(s2)) + 1);

	if (!str)
	return (NULL);

	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';

	return (str);
}
