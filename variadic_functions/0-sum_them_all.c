#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - check the code
 * @n: integer
 * Desc: sum
 * Return: somme
 */

int sum_them_all(const unsigned int n, ...)
{
	int i = 0;
	int somme = 0;

	if (n == 0)
	return (0);

	va_list args;

	va_start(args, n);

	while (i < n)
	{
		somme += va_arg(args, int);
		i++;
	}
	va_end(args);

	return (somme);
}
