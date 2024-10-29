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

	while (s[i] != '\0')
        {
               	i++;
        }
	while (i >= 0)
	{
		write(1, &s[i], 1);
		i--;
	}
	write(1, "\n", 1);
}
