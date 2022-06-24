#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of arguments passed to a function
 * @argv: an argument from pointer to string
 * Return: Always 0 success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
