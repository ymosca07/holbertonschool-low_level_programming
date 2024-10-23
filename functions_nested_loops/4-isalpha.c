/**
 * _isalpha - check the description
 * @c: input
 * Description: lowercase uppercase return 1 and otherwise return 0
 * Return: 1 if letter or 2 if otherwise.
 */

int _isalpha(int c)
{
	if((c >= 'a' && c <= 'z')
	|| c >= 'A' && c <= 'Z')
	return (1);

	return (0);
}
