#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array to search
 * @size: number of element in array
 * @cmp: pointer to the function to be used to compare values
 * Return: index of first element for which cmp function not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);

}
