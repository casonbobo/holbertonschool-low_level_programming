#include "main.h"
/**
 *alloc_grid - you sunk my alloc
 *@width:  stretchy
 *@height: loooooooooong man
 *Return: just a number really
 */
int **alloc_grid(int width, int height)
{
	int i, j, n, m;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);

		if (a[i] == NULL)
		{
			for (j = i; j >= 0; j--)
				free(a[j]);

			free(a);
			return (NULL);
		}
	}
	for (n = 0; n < height; n++)
	{
		for (m = 0; m < width; m++)
			a[n][m] = 0;
	}

	return (a);
}
