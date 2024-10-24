#include <unistd.h>

/**
 * print_sign - check the description.
 * @n: input
 * Description: return sign
 * Return: Always 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		write(1, "+", 1);
		return (1);
	}
	if (n == 0)
	{
		write(1, "0", 1);
		return (0);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		return (-1);
	}
	return (1);
}
