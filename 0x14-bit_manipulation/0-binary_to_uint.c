#include "main.h"
/**
 * binary_to_uint - function converts binary number to unsigned int
 * @b: binary number to be convert
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, l, sum, pow;
	int base;

	base = 2;
	sum = 0;
	if (b == NULL)
	{
		return (0);
	}
	for (len = 0; b[len] != '\0'; len++)
		;
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		for (j = l - 1; j > 0; j--)
		{
			pow = pow * base;
		}
		sum = sum + (pow * (b[i] - 48));
		l--;
		pow = 1;
	}
	return (sum);
}
