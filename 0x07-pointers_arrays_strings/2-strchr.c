#include "main.h"
#include <stdio.h>
/**
 * *_strchr - function that locates a character in a string
 * @s: the C string to be scanned
 * @c:  the character to be searched in s
 * Return: a pointer to the first occurrence of c in s
 * NULL if the character is not found
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return ('\0');
}
