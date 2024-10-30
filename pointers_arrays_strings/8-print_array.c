#include <stdio.h>

/**
 * print_array - check the desc
 * @a: input
 * @n: input
 * Desc: print int's value
 * Return: value
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
		{
			printf("%d\n", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
		i++;
	}

	if (n == '\0')
	printf("\n");

}
