#include "main.h"
/**
 * puts_half - function should print the second half of the string
 * @str: string
 */
void puts_half(char *str)
{
	int i, l;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	if (l % 2 == 1)
	{
		i = (l - 1) / 2;
		i += 1;
	}
	else
	{
		i = l / 2;
	}
	for (; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
