#include <unistd.h>

/**
 * print_square - check the desc
 * @size: input
 * Desc : print squares
 * Return: size of squares
 */

void print_square(int size)
{
	int i; /* ligne */
	int v = 0;

	if (size <= 0)
	write(1, "\n", 1);
	else
	{
		while (v < size)
		{
			i = 0;
			while (i < size)
			{
				write(1, "#", 1);
				i++;
			}
			v++;
			write(1, "\n", 1);
		}
	}
}
