#include <stdlib.h>
#include <unistd.h>

int **alloc_grid(int width, int height)
{
	int i = 0;
	int j;
	int **tab;

	if (width <= 0 || heigth <= 0)
	return (NULL);

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
	write(1, "\n", 1);
	return (tab);
}
