#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: string to know its lenght
 * Return: the length
 */
int _strlen(char *s)
{
	int i, length;

	length = 0;
	for (i = 0; s[i] != '\0'; ++i)
	{
		length = i + 1;
	}
	return (length);
}
