#include <unistd.h>

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n - 1)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
