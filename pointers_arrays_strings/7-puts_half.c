#include <unistd.h>

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void puts_half(char *str)
{
	int n = (_strlen(str) - 2) / 2;

	while (str[n] != '\0')
	{
		write(1, &str[n], 1);
		n++;
	}
	write(1, "\n", 1);
}
