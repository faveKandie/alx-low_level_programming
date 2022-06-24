#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments passed to the function
 * @argv: an argument vector of pointers to strings
 * Return: Always 0 and 1 success
 */
int main(int argc, char *argv[]);
{
	int a, b, c;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;
	printf("%d\n", c);
	return (0);
}
