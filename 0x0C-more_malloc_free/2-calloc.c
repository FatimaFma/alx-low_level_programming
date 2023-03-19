#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: array
 * @size: array size
 * Return: NULL if array or size equal zero
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		p[i] = 0;
	}
	return (p);
}
