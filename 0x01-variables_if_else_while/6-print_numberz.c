#include<stdio.h>
/**
 * main - program that prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
		putchar('0' + ch);
	}
	putchar('\n');
	return (0);
}
