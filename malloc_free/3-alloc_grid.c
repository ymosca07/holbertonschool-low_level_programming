#include <stdlib.h>
#include "main.c"

int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
	return (NULL);

	int **tab;
	int **str;

	tab = malloc(sizeof(*tab) * (width * height));

	while (tab[width] != '\0')
	{
		str[width + height] = tab[width + height];
		width++;
	}

	while (tab[height] != '\0')
	{
		str[width + height] = tab[width + height];
		height;
	}
	return (str);
}
