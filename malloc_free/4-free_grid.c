void free_grid(int **grid, int height)
{
	int i = 0;

	while (grid[i] < height)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}
