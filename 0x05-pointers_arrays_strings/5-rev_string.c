#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: string
 */
void rev_string(char *s);
{
	int i, j;
	char r;

	j = 0;
	r = s[0];
	while (s[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j; i++)
	{
		j--;
		r = s[i];
		s[i] = s[j];
		s[j] = r;
	}
}
