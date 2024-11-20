/**
 * print_name - check the desc
 * @name: name of the person
 * @f: function
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
