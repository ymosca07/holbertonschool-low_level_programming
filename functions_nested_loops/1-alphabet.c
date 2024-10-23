#include <unistd.h>
#include "1-main.c"

void print_alphabet(void)
{
	int i = 'a';

	while(i <= 'z')
	{
		write(1, &i, 1);
		i++;
	}
	write(1, "\n", 1);
}
