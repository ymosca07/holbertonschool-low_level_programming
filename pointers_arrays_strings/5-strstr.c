#include <stdio.h>

/**
 * _strstr - check the desc
 * @haystack: string
 * @needle: string
 * Desc: string
 * Return: string needle
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	if (needle[j] == '\0')
		return (0);

	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i] == needle[j])
			i++;
			else
			{
				j++;
				break;
			}

			return (haystack + i - 1);
		}
		i++;
	}
	return (0);
}
