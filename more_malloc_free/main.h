char *string_nconcat(char *s1, char *s2, unsigned int n);

int _strlen(char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
