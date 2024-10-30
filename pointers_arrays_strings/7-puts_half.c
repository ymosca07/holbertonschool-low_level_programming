#include <unistd.h>

/**
 * _strlen - check the desc
 * @str: input
 * Desc: print lenght
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
 * puts_half - check the desc
 * @str: input
 * Desc: print string's half
 * Return: string
 */

void puts_half(char *str)
{
	int n = (_strlen(str)) - 1 / 2;
	int p = (_strlen(str)) / 2;

	if (_strlen(str) % 3 == 0)
	{
		while (str[n] != '\0')
		{
			write(1, &str[n], 1);
			n++;
		}
	}
	else if (_strlen(str) % 2 == 0)
	{
		while (str[p] != '\0')
		{
			write(1, &str[p], 1);
			p++;
		}
	}
	write(1, "\n", 1);
}
