#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
	return (NULL);

	int i = 0;
	int j;
	int **tab;

	tab = malloc(sizeof(int *) * height);

	if (tab == NULL)
	return (NULL);

	while (i < height)
	{
		tab[i] = malloc(sizeof(int) * width);
		
		while (j < width)
		{
			tab[i][j] = 0;
			j++;
		}

		i++;
	}
	return (tab);
}
