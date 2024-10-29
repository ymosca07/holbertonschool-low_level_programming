/**
 * _puts - check the desc
 * @str: input
 * Desc: return string
 * Return: string
 */

#include <unistd.h>

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
