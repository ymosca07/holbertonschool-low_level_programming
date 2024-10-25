#include "main.h"

/**
 * jack_bauer - check the description
 * @i, j : input
 * Description: print 24 hours
 * Return : time of a day
 */

void jack_bauer(void)
{
	int h, m;

	h = 0;

	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			m++;
		}
		h++;
	}
}
