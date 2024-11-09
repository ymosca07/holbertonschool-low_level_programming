#include <unistd.h>

/**
 * jerome - check the code
 * @c: caracter
 * Desc: print c
 * Return: c
 */

void jerome(char c)
{
	write(1, &c, 1);
}

/**
 * _putnbr - check the desc
 * @d: integer
 * Desc: print numbers
 * Return: d
 */

void _putnbr(int d)
{
	if (d < 0)
	{
		write(1, "-", 1);
		d *= -1;
	}

	if (d / 10 != 0)
	{
		_putnbr(d / 10);
	}
	jerome(d % 10 + 48);
}

/**
 * print_to_98 - check the desc
 * @n: integer
 * Desc: print n to 98
 * Return: n to 98
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			_putnbr(n);
			write(1, ", ", 2);
			n--;
		}
	}
	else if (n < 98 && n >= 0)
	{
		while (n < 98)
		{
			_putnbr(n);
			write(1, ", ", 2);
			n++;
		}
	}
	else if (n < 0)
	{
		while (n < 98)
		{
			_putnbr(n);
			write(1, ", ", 2);
			n++;
		}
	}

	if (n == 98)
	{
		write(1, "98\n", 3);
	}
}
