#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - check the code
 * @separator: string
 * @n: integer
 * Desc: print string
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *res;
	va_list args;

	va_start(args, n);

	while (i < n)
	{
		res = va_arg(args, char*);

		if (res == NULL)
		{
			printf("(nil)");
		}
		else
		{
			print("%s", res);
		}


		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(args, n);
}
