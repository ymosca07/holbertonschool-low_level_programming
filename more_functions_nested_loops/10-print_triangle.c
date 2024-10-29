#include <unistd.h>

/**
 * print_triangle - check the desc
 * @size: input
 * Desc: return #
 * Return: print #
 */

void print_triangle(int size)
{
	int i = 0; /* Condition d'arret */
	int v; /* Positionner les espaces */

	if (size <= 0)
	write(1, "\n", 1);
	else
	{
		while (i < size)
		{
			v = 1;
			while (v < size - i)
			{
				write(1, " ", 1);
				v++;
			}
			while (v <= size)
			{
				write(1, "#", 1);
				v++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
}
