#include<stdio.h>
/**
 * main - prints the alphabet in lowercase
 * Return: return 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		putchar('\n');
		ch++;
	}
	return (0);
}
