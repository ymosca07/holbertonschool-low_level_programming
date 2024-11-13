#include <stdlib.h>
#include <string.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	int j = 0;
	char *str;

	str = malloc(strlen(s1) + (n < strlen(s2) ? n : strlen(s2)) + 1);

	if (!str)
	return (NULL);

	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (j <= n)
	{
		str[i + j] = s2[j];
		j++;
	}
	return (str);
}
