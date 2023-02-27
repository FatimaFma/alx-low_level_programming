#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 * @a: first value to swap
 * @b: second value to swap
 */
void swap_int(int *a, int *b)
{
	int a1, b1;

	a1 = *b;
	b1 = *a;
	*a = a1;
	*b = b1;
}
