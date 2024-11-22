#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - check the code
 * @separator: const char
 * @n: integer
 * Desc: print numbers
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	unsigned int res;
	va_list args;

	va_start(args, n);

	while (i < n)
	{
		res = 0;
		res = va_arg(args, int);

		if (i != n - 1 && separator != NULL)
		{
			printf("%d%s", res, separator);
		}
		else if (separator != NULL)
		{
			printf("%d\n", res);
		}

		i++;
	}
	va_end(args);
}
