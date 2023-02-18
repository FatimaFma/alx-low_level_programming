#include<stdio.h>
/**
 * main - prints the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e')
		{
			ch++;
		}
		else if (ch == 'q')
		{
			ch++;
		}
		else
		{
			putchar(ch);
			ch++;
		}
	}
	putchar('\n');
	return (0);
}
