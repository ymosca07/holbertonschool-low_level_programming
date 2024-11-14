#include <stdlib.h>
#include "main.c"

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
		j = 0;
		//while (j < width)
		//{
			tab[i] = malloc(sizeof(int) * width);

			if (tab[i] == NULL)
			return (NULL);

			//j++;
		//}
		i++;
	}
	return (tab);
}
