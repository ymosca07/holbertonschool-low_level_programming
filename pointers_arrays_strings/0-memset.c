/**
 * _memset - check the desc
 * @s: memory area
 * @b: caracter
 * @n: size
 * Desc: print memory area s
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
