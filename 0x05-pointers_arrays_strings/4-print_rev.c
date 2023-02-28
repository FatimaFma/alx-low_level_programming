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
	for (i = 0; *s != '\0'; i++)
	{
		length = i + 1;
	}
	s++;
	for (i = length; i > 0; i--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
