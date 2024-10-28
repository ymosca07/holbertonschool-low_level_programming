#include <unistd.h>

/**
 * more_numbers - check the desc
 * Desc: print 10 times
 * Return: numbers 10 times
 */

void more_numbers(void)
{
	write(1, "01234567891011121314\n", 16);
	write(1, "01234567891011121314\n", 16);
	write(1, "01234567891011121314\n", 16);
	write(1, "01234567891011121314\n", 16);
	write(1, "01234567891011121314\n", 16);
	write(1, "01234567891011121314\n", 16);
	write(1, "01234567891011121314\n", 16);
	write(1, "01234567891011121314\n", 16);
	write(1, "01234567891011121314\n", 16);
	write(1, "01234567891011121314\n", 16);
}
