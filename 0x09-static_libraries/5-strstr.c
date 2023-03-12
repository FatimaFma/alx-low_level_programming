#include "main.h"
#include <stdio.h>
/**
 * *_strstr - function that locates a substring
 * @haystack: string to be scanned
 * @needle: small string to be searched with-in haystack string
 * Return: pointer to the beginning of the located substring
 * NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *str1, *str2;

	for (; *haystack != '\0'; haystack++)
	{
		str1 = haystack;
		str2 = needle;
		while (*str1 == *str2 && *str2 != '\0')
		{
			str1++;
			str2++;
		}
		if (*str2 == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
