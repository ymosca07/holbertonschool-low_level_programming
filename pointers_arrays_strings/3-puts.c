#include <unistd.h>

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, &i, 1);
		i++;
	}
}
