/**
 * factorial - check the code
 * @n: number
 * Desc: return fqctoria
 * Return: n
 */

int factorial(int n)
{
	if (n == 0)
	return (1);

	if (n < 0)
	return (-1);

	if (n > 0)
	{
		return(n * factorial(n - 1));
		n--;
	}
}
