#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 * @n: tested value
 * Return: Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		_putchar('+');
		result = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		result = -1;
	}
	else if (n == 0)
	{
		_putchar(0);
		result = 0;
	}
	return (result);
}
