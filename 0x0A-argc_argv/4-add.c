#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers
 * @argc: number of arguments passed to the function
 * @argv: an argument vector from pointers to strings
 * Return: Always 0 on success, 1 on error
 */
int main(int argc, char *argv[]);
{
	int a = 0, i, j;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				puts("error");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		a += atoi(argv[i]);
	}
	printf("%d\n", a);
	return (0);
}
