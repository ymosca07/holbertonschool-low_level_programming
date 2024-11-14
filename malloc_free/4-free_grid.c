#include <stdlib.h>

void free_grid(int **grid, int height)
{

	while (height > 0)
	{
		free(grid[i]);
		i--;
	}

	free(grid);
}
