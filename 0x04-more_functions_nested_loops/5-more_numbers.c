#include "main.h"
/**
 * more_numbers - function that prints 10 times
 * the numbers, from 0 to 14
 * Return: no return
 */
void more_numbers(void)
{
	int j;

	for (j = 0; j <= 14; j++)
	{
		if (j <= 9)
		{
			_putchar(j + '0');
		}
		else if (j > 9)
		{
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
	}
	_putchar('\n');
}
