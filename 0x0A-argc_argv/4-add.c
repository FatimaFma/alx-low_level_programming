#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds positive numbers
 * @argc: arguments
 * @argv: array of arguments
 * Return: 0 if succesful, 1 if error
 */
int main(int argc, char *argv[])
{
	int i, j, sum, num;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			num = atoi(argv[i]);
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
