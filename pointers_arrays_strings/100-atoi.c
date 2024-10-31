#include <string.h>
#include <unistd.h>
#include <stdio.h>



int _atoi(char *s)
{
	int i = 0;
	int res = 0;
	int sign = 1;

	if ((s[i] < 48 && s[i] > 57) || s[i] == 0)
	return (0);

	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		sign *= -1;

		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		res = (res * 10) + s[i] - 48;
		i++;
	}
	return (res * sign);

}
