#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry ruote
 * @n: parameters to be used
 * Return: Always 0 Success
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = 0; n <= 97; n++)
			_putchar(n);
	}
	else
	{
		for (n = 0; n > 98; n--)
			_putchar(n);
		_putchar(' ');
		_putchar(',');
	}
	_putchar('\n');
}
