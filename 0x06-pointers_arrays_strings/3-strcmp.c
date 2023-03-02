#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: string1
 * @s2: string2
 * Return: 0 if strings are equal
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}	
	return (*s1 - *s2);
}
