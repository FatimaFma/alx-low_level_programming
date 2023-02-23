#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
 * positive_or_negative - check if value is negative or positive
 * @i: tested value
 * Return: Returns 0
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	return (0);
}
