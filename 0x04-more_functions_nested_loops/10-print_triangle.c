#include "main.h"
/**
 * print_triangle - function that prints a triangle
 * @size: the size of the triangle
 * Return: no return
 */
void print_triangle(int size)
{
	int i, j, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - i; j > 1; j--)
			{
				_putchar(32);
			}
			for (z = 0; z <= i; i++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
