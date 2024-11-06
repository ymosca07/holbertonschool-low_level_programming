/**
 * _strchr - check the desc
 * @s: string
 * @c : target caracter
 * Desc: return caracter c to finish
 * Return: string
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while ((s[i] != '\0') && (s[i] != c))
	{
		i++;
	}

	if (s[i] == c)
		return (s + i);
	else
		return (0);
}
