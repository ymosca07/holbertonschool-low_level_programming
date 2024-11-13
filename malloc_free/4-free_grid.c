void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(height[i]);
		i++;
	}

	free(grid);
}
