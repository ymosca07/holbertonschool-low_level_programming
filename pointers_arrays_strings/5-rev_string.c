/**
 * _strlen - check the desc
 * @str: input
 * Desc: string's numbers
 * Return: i
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * rev_string - check the desc
 * @s: input
 * Desc: reverse string
 * Return: string
 */

void rev_string(char *s)
{
	int last = _strlen(s) - 1;
	int first = 0;
	char temp;

	while (first < last)
	{
		temp = s[first];
		s[first] = s[last];
		s[last] = temp;

		first++;
		last--;
	}
}
