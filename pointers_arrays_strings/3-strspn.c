/**
 * _strspn - check the desc
 * @s: string
 * @accept: compteur
 * Desc: print memory s
 * Return: 1
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	int count = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
			}
			j++;
		}
		if (accept[j] == '\0')
		break;
	}
	return (count);
}
