#include <unistd.h>

/**
 * _puts_recursion - check the desc
 * @s: string
 * Desc: write string
 * Return: string
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		write(1, "\n", 1);
		return;
	}

	write(1, &s[i], 1);
	_puts_recursion(s + 1);
}
