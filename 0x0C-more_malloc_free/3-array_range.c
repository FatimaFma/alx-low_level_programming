#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: min value to insert
 * @max: max value to insert
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	p = malloc(size * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max; i++)
	{
		p[i] = min++;
	}
	return (p);
}
