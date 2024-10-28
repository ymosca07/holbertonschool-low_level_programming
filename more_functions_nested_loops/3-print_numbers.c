#include <unistd.h>

/**
 * print_numbers - check the desc
 * Desc: digit
 * Return: return digit
 */

void print_numbers(void)
{
	write(1, "0123456789\n", 11);
}
