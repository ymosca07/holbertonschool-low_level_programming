#include <stdio.h>

/**
 * _strcpy - check the desc
 * @dest: input
 * @src: input
 * Desc: cpy src in dest
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
