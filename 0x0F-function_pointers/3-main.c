#include <stdio.h>
#include "3-calc.h"
/**
 * main - main function
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0
 */
int main (int argc, char *argv[])
{
	int a, b;
	int (*c)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(99);
	}
	c = get_op_func(argv[2]);
	if (c == NULL)
	{
		 printf("Error\n");
		 exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", c(a, b));
	return (0);
}
