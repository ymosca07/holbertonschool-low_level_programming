/**
 * _strspn - check the desc
 * @s: string
 * @accept: string
 * Desc: lenght
 * Return: i
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (accept[i] != '\0')
	{
		i++;
	}
	return (i + 1);
}
