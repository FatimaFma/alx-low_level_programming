#include<stdio.h>
#include<unistd.h>
/**
* main - C program that prints statment
* Return: 1
*/
int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fprintf(stderr, "%s", s);
	return (1);
}
