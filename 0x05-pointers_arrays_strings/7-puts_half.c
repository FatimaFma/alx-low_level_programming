#include "main.h"
/**
 * puts_half - function should print the second half of the string
 * @str: string
 */
void puts_half(char *str)
{
	int i, l, half;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	half = l / 2;
	for (i = half; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
