#include "function_pointers.h"

/**
 * print_name - check the desc
 * @name: name of the person
 * @f: function
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
		f(name);
}
