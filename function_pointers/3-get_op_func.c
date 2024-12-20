#include "3-calc.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * get_op_func - check the desc
 * @s: string
 * Desc: search op
 * Return: ops
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
		return (ops[i].f);

		i++;
	}
	return (NULL);
}
