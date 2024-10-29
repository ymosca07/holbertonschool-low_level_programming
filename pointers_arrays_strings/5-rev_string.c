#include <stdio.h>
#include <unistd.h>

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}

	write(1, "\n", 1);

	while (i > 0)
	{
		i--;
		write(1, &s[i], 1);
	}
}
