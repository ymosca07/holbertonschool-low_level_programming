#include <stdio.h>

/**
 * _strpbrk - check the desc
 * @s: string
 * @accept: string
 * Desc: return strring
 * Return: string
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int c = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			return (s + c);
			else
			j++;
		}
		i++;
		c++;
	}
}
