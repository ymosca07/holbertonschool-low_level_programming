#include <stdlib.h>

void free_grid(int **grid, int height)
{
	int i = grid[i];

	while (i > height)
	{
		free(grid[i]);
		i--;
	}

	free(grid);
}
