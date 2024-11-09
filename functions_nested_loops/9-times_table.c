#include <unistd.h>

/**
 * jerome - check the code
 * @c: integer
 * Desc: print one digit
 * Return: c
 */

void jerome(char c)
{
	write(1, &c, 1);
}

/**
 * _putnbr - check the code
 * @d: integer
 * Desc: print number
 * Return: d
 */

void _putnbr(int d)
{
	if (d / 10 != 0)
	{
		_putnbr(d / 10);
	}
	jerome(d % 10 + 48);
}

/**
 * times_table - check the code
 * Desc: print nine tables
 * Return: tables
 */

void times_table(void)
{
	int i = 0;
	int nb;
	int o;

	while (i <= 9)
	{
		nb = 0;
		while (nb <= 9)
		{
			o = i * nb;

			if (nb != 0 && o > 9)
			write(1, ", ", 2);
			else if (nb != 0 && o < 10)
			write(1, ",  ", 3);

			_putnbr(o);
			nb++;
		}
		write(1, "\n", 1);
		i++;
	}
}
