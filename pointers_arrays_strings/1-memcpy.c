/**
 * _memcpy - check the desc
 * @dest: destination
 * @src: source
 * @n: size
 * Desc: return dest
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
