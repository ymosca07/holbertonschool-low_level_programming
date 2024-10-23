#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	int i;

	i = 'a';

	while (i <= 'z')
	{
		write(1, &i, 1);
		i++;
	}
	write(1, "\n", 1);
}
