#include <unistd.h>

/**
 * _puts_recursion - check the desc
 * @s: string
 * Desc: write string
 * Return: string
 */

void _puts_recursion(char *s)
{
	int i = &s[i];

	if (s[0] == '\0')
	{
		write(1, "\n", 1);
		return;
	}

	write(1, &s[i], 1);
	_puts_recursion(s - 1);
}

int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}
