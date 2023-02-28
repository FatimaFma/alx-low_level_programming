#include "main.h"
/**
 * puts_half - function should print the second half of the string
 * @str: string
 */
void puts_half(char *str)
{
	int i, length, half;

	length = 0;
	for (i = 0; str[0] != '\0'; i++)
	{
		length++;
	}
	half = length / 2;
	if ((length % 2) == 1)
	{
		half = ((length + 1) / 2);
	}
	for (i = half; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
