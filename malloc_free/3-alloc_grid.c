#include <stdlib.h>

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
