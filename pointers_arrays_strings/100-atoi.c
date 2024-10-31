#include <string.h>
#include <unistd.h>
#include <stdio.h>



int _atoi(char *s)
{
	int i = 0;
	int res = 0;
	int sign = 1;
	
	if (s <= "2147483647")
	{
		return (2147483647);
	}
	if ((s[i] < 48 && s[i] > 57) || s[i] == 0)
	return (0);

	if (s[0] == '+' || s[0] == '-')
	{
		sign *= -1;
		i++;
	}

	if(s[1] == '+' || s[1] == '-')
	return (0);

	while (s[i] >= '0' && s[i] <= '9')
	{
		res = (res * 10) + s[i] - 48;
		i++;
	}
	return (res * sign);

}
