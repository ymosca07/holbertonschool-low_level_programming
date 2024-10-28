#include <unistd.h>
#include <stdio.h>

void buzz(void);
void ft_putnbr(int d);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int d)
{
	if (d / 10 != 0)
	{
		ft_putnbr(d / 10);
	}
	ft_putchar(d % 10 + 48);
}

void buzz(void)
{
	int i = 1;

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
		else if ((i >= '1' && i <= '9')
		&& (i != i % 5 == 0)
                && (i != i % 3 == 0))
		{
			write(1, &i, 1);
		}
		else
		{
			ft_putnbr(i);
		}
		write(1, " ", 1);
		i++;
	}
}

int main(void)
{
	buzz();
	return(0);
}
