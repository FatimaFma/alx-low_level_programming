#include "main.h"
/**
 * *cap_string - function that capitalizes
 * all words of a string
 * @str: string in upper case
 * Return: string after lower case
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		while (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			i++;
		}
		if (str[i - 1] == " " 
		|| str[i - 1] == '\t'
		|| str[i - 1] == '\n'
		|| str[i - 1] == ','
		|| str[i - 1] == ';'
		|| str[i - 1] == '.'
		|| str[i - 1] == '!'
		|| str[i - 1] == '?'
		|| str[i - 1] == '"'
		|| str[i - 1] == '('
		|| str[i - 1] == ')'
		|| str[i - 1] == '{'
		|| str[i - 1] == '}'
		|| i == 0)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
