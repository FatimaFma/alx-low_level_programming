#include "main.h"
/**
 * puts2 - function that prints every other character
 * of a string, starting with the first character
 * @str: string to be added
 */
void puts2(char *str)
{
	int i, j;

	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
