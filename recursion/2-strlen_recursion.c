/**
 * _strlen_recursion - check the desc
 * @s: string
 * Desc: strlen
 * Return: i
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
