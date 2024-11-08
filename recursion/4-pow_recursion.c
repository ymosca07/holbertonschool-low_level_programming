/**
 * _pow_recursion - check the desc
 * @x: integer
 * @y: integer
 * Desc: power
 * Return: power's result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);

	if (y == 0)
	return (1);

	if (y > 0)
	return (x * _pow_recursion(x, y - 1));
}
