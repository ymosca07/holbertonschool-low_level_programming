void *malloc_checked(unsigned int b);

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

void *_calloc(unsigned int nmemb, unsigned int size);

int *array_range(int min, int max);
