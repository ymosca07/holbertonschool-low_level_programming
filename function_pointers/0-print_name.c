#include "function_pointers.h"

/**
 * print_name - print name
 * @name: pointer
 * @f: function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
		f(name);
}
