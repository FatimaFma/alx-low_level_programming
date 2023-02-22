#include "main.h"
#include <ctype.h>
/**
 * _isalpha - function that checks for alphabetic character
 * @c: is a checked letter
 * Return: Returns 1 if c is a letter
 * Returns 0 otherwise
 */
int _isalpha(int c)
{
	int result;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		result = 1;
	}
	else if (isalpha(c) == 0)
	{
		result = 0;
	}
	return (result);
}

