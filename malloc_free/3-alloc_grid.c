#include <stdlib.h>
#include "main.c"
#include "main.h"

int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
	return (NULL);

	int i = 0;
	int j = 0;
	int **tab;

	while (i < height)
	{
		tab = malloc(sizeof(*tab) * height);

		while (j < width)
		{
			tab[j] = malloc(sizeof(int) * width);
			j++;
		}
		i++;
	}
}
