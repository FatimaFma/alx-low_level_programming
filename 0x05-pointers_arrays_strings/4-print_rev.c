#include "main.h"
/**
 * print_rev -  function that prints a string, in reverse
 * @s: string
 * Return: no return
 */
void print_rev(char *s)
{
	int i, length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (i = length; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
