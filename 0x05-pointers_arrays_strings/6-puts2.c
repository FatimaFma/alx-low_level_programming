#include "main.h"
/**
 * puts2 - function that prints every other character
 * of a string, starting with the first character
 * @str: string to be added
 */
void puts2(char *str)
{
	int i, j, t, length;
	char *ch;

	t = 0;
	length = 0;
	*ch = str;
	while (*ch != '\0')
	{
		*ch++;
		length++;
	}
	t = length - 1;
	for (j = 0; j <= t; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
