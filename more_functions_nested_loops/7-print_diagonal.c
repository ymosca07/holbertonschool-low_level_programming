#include <unistd.h>

/**
 * print_diagonal - check the desc
 * @n: input
 * Desc: print n times
 * Return: n times
 */

void print_diagonal(int n)
{
	int i = 0;
	int v;

	if (n <= 0)
	{
		write(1, "", 0);
		write(1, "\n", 1);
	}
	else
	{
	while (i < n)
	{
		v = 0;
		while (v <= i - 1)
		{
			write(1, " ", 1);
			v++;
		}
		write(1, "\\\n", 2);
		i++;
	}
	}
}
