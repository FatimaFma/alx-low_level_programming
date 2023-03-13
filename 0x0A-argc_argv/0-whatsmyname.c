#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of program
 * @argc: number of arguments
 * @argv: the array of arguments
 * Return: number of arguments
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

