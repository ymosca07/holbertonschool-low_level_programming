#include <stdlib.h>

/**
 * alloc_grid - check the code
 * @width: integer
 * @height: integer
 * Desc: array
 * Return: Always 0.
 */

int **alloc_grid(int width, int height)
{
	int i = 0;
	int j;
	int **tab;

	if (width <= 0 || height <= 0)
	return (NULL);

	tab = malloc(sizeof(int *) * height);

	if (tab == NULL)
	return (NULL);

	while (i < height)
	{
		tab[i] = malloc(sizeof(int) * width);
		if (tab[i] == NULL)
		{
			while (i > 0)
			{
				free(tab[i]);
				i--;
			}
			free(tab);
		}

		j = 0;
		while (j < width)
		{
			tab[i][j] = 0;
			j++;
		}

		i++;
	}
	return (tab);
}
