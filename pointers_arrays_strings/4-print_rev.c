/**
 * print_rev - check the desc
 * @s: input
 * Desc: reverse string
 * Return: reverse string
 */

#include <unistd.h>

void print_rev(char *s)
{
	int i = 0;
	int j = 0;
	while (s[i] != '\0')
        {
		i++;
	}
	while (i > j)
	{
		write(1, &s[j], 1);
		j--;
	}
	write(1, "\n", 1);
}
