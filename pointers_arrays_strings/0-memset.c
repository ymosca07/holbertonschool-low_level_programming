#include <unistd.h>

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i - 1] = b;
		i++;
	}
	return (s);
}
