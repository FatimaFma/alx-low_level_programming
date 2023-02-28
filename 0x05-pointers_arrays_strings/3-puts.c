#include "main.h"
/**
 * _puts - function that prints a string
 * @str: string
 * Return: string printed
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i != "\0"; i++)
	{
		_putchar(str);
		_putchar("\n");
	}
}
