#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints
 * n elements of an array of integers
 * @a: array
 * @n: number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0 || i == n)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%c", 44);
			printf("%c", 32);
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
