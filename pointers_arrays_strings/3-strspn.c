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
				break;
			}
			j++;
		}
		if (accept[i] == '\0')
		{
			break;
		}
		i++;
	}
	return (count);
}
