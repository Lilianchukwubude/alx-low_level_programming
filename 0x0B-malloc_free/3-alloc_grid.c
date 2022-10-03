#include <stdlib.h>

/**
 * alloc_grid - Create a 2d array
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int w, x, y, **k;

	if (width <= 0 || height <= 0)
		return (NULL);
	k = malloc(height * sizeof(*k));
	if (k == NULL)
		return (k);
	for (w = 0; w < height; w++)
	{
		k[w] = malloc(width * sizeof(int));
		if (k[w] == NULL)
		{
			for (y = 0; y < w; y++)
				free(k[y]);
			free(k);
			return (NULL);
		}
		for (x = 0; x < width; x++)
			k[y][x] = 0;
	}
	return (k);
}
