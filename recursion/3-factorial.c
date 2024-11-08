/**
 * factorial - check the desc
 * @n: integer
 * Desc: factorial of a number in parameter
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
	return (-1);

	if (n == 0)
	return (1);

	if (n > 0)
	{
		return (n * factorial(n - 1));
		n--;
	}
}
