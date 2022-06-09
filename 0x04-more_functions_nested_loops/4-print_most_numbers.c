#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * Return: Always 0
 */
void print_most_numbers(void)
{
	for (n = 0; n <= 9; n++)
	{
		while(n != 2 && n != 4)
			_putchar((n % 10) + '0');

		_putchar('\n');
	}
}
