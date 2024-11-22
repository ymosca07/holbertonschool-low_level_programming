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
	unsigned int num;
	va_list args;

	va_start(args, n);

	while (i < n)
	{
		num = va_arg(args, int);

		printf("%d\n", num);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}

		i++;
	}
	printf("\n");
	va_end(args);
}
