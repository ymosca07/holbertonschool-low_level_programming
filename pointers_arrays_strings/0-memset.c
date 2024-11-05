#include <unistd.h>

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	s[i] = b;

	while (s[i] != n)
	{
		write(1, &s[i], 1);
		i++;
	}
	return (s);
}
