/**
 * _strlen - check the desc
 * @s: input
 * Desc: print lenght
 * Return: *s's lenght
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] == '\0')
	{
		i++;
	}
	return (i);
}
