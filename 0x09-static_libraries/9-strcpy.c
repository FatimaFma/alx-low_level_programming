#include "main.h"
/**
 * *_strcpy - function that copies the string
 * pointed to by src to dest
 * @src: string that will copy from
 * @dest: string that copy to
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	j = 0;
	while (*(src + j) != '\0')
	{
		j++;
	}
	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
	}
	dest[j] = '\0';
	return (dest);
}
