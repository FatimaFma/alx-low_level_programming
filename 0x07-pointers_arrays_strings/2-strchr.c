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
	int i;

	for (i = 0; i >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
