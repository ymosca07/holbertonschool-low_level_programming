#include <unistd.h>

/**
 * print_alphabet_x10 - check the descriptino.
 * Description: Print alphabets X10
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int max = 10;

	while (i != max)
	{
		write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
		i++;
	}
}
