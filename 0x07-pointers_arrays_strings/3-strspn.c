#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: number of characters
 * in the initial segment of str1
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, l, ch;

	l = 0;
	for (i = 0; s[i] >= '\0'; i++)
	{
		ch = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				l++;
				ch = 1;
			}
		}
		if (ch == 0)
		{
			ch = 0;
		}
	}
	return (ch);
}
