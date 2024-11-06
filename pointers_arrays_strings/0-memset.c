#include <unistd.h>

char *_memset(char *s, char b, unsigned int n)
{
	while (s[n] != n)
	{
		s[n - 1] = b;	
		n--;
	}
	return (s);
}
