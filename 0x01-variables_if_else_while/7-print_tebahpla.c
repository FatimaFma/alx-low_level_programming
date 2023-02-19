#include<stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 9; num >= 0; num--)
	{
		putchar('0' + num);
	}
	putchar('\n');
	return (0);
}
