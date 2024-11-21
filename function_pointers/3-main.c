#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - check the desc
 * @argc: integer
 * @argv: string
 * Desc: main
 * Return: 0
 */

int main(int argc, char **argv)
{
	int num1, num2;

	if (argc != 4)
	{
		write(1, "Error\n", 6);
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (num2 == 0 && ((strcmp(argv[2], "/") == 0) || strcmp(argv[2], "%") == 0))
	{
		write(1, "Error\n", 6);
		exit(100);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		write(1, "Error\n", 6);
		exit(99);
	}
	printf("%d\n", (*get_op_func(argv[2]))(num1, num2));

	return (0);
}
