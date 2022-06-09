#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * Return: Always 0
 * @n: character used
 */
void print_diagonal(int n)
{
	int m;

	if (n > 0)
	{
		for (m = 0; m < n; m++)
			_putchar('\');
	}

	_putchar('\n');
}
