#include <stdio.h>
#include <math.h>
/**
 * main -  prime factor of the number 612852475143
 * Return: 0;
 */
int main(void)
{
	int i, max;
	long num = 612852475143;
	double square = sqrt(num);

	for (i = 1; i <= square; i++)
	{
		if (num % i == 0)
		{
			max = num / i;
		}
	}
	printf("%d\n", max);
	return (0);
}
