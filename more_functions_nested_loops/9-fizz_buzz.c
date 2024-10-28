#include <unistd.h>
#include <stdio.h>

void buzz(void);
void ft_putnbr(int d);

/**
 * ft_putchar - check the desc
 * @c: input
 * Desc: print caractere
 * Return: caractere
 */

void ft_putchar(char c)
{
	write(1, &c, 1);
}

/**
 * ft_putnbr - check the desc
 * @d: input
 * Desc: print number
 * Return: number
 */

void ft_putnbr(int d)
{
	if (d / 10 != 0)
	{
		ft_putnbr(d / 10);
	}
	ft_putchar(d % 10 + 48);
}

/**
 * buzz - check the desc
 * Desc: print numbers 1 to 100 with mutiply of 5 and 3
 * Return: numbers 1 to 100
 */

void buzz(void)
{
	int i = 1;
	int itoa = i + '0';

	while (i <= 100)
	{

		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0)
			{
				write(1, "Fizz", 4);
			}
			if (i % 5 == 0)
			{
				write(1, "Buzz", 4);
			}
		}
		else if (i >= 1 && i <= 9)
		{
			itoa = i + '0';

			write(1, &itoa, 1);
		}
		else
		{
			ft_putnbr(i);
		}
		write(1, " ", 1);
		i++;
	}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	buzz();
	return (0);
}
