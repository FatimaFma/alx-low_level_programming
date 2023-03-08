#include "main.h"
#include <string.h>
#include <stdbool.h>
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: number of characters
 * in the initial segment of str1
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, il, l1, l2;

	l1 = 0;
	l2 = 0;
	i = 0;
	j = 0;
	il = 0;
	while (s[i++])
	{
		l1++;
	}
	while (s[j++])
	{
		l2++;
	}
	for (i = 0; i < l1; i++)
	{
		bool found = false;

		for (j = 0; j < l2; j++)
		{
			if (accept[j] == s[i])
			{
				found = true;
				break;
			}
		}
		if (!found)
		{
			break;
		}
		else
		{
			il++;
		}
	}
	return (il);
}
