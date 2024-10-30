#include <unistd.h>

/**
 * puts2 - check the code
 * @str: input
 * Desc: even caracaters
 * Return: even caracters
 */

void puts2(char *str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			write(1, &str[i], 1);
			i++;
		}
		if (i % 2 == 1)
		{
			i++;
		}
	}
	write(1, "\n", 1);
}
