#include "main.h"
/**
 * *_strncat - function that concatenates two strings
 * @dest: string where we want to append
 * @src: string which ‘n’ characters are going to append
 * @n: maximum number of characters to be appended
 *Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, l;

	i = 0;
	j = 0;
	l = 0;
	while (dest[i++])
	{
		l++;
	}
	for (j = 0; src[j] && j < n; j++)
	{
		dest[l++] = src[j];
	}
	return (dest);
}
