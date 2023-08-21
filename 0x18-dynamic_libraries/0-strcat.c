#include "main.h"
/**
 * *_strcat - function that concatenates two strings
 * @dest: string
 * @src: string
 * Return: Returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, l, j, l_s;

	i = 0;
	j = 0;
	l = 0;
	l_s = 0;
	while (dest[i++])
	{
		l++;
	}
	while (src[j++])
	{
		l_s++;
	}
	for (i = 0; i < l_s; i++)
	{
		dest[l++] = src[i];
	}
	return (dest);
}
