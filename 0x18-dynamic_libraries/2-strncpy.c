#include "main.h"
/**
 * *_strncpy - function that copies a string
 * @dest: string to copy from
 * @src: string to copy for it
 * @n: number of copy character
 * Return: string after copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, l;

	i = 0;
	l = 0;
	while (src[i++])
	{
		l++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = l; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
