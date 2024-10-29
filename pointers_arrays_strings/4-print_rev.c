#include <unistd.h>

/**
 * print_rev - check the desc
 * @s: input
 * Desc: reverse string
 * Return: string
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		write(1, &s[i], 1);
	}
	write(1, "\n", 1);
}
