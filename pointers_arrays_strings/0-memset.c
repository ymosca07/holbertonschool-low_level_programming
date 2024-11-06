#include <unistd.h>

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	write(1, "\n", 1);
	return (s);
}
