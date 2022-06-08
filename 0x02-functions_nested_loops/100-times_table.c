#include "main.h"
/**
 * print_times_table - Entry point
 * Return: Allways 0 Success
 */
void print_times_table(int n)
{
	int digit, result;

	for (n = 0; n <= 15; n++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (digit = 1; digit <= 15; digit++)
		{
			result = n * digit;
			if ((result / 10) > 0)
				_putchar((result / 10) + '0');
			else 
				_putchar(' ');
			_putchar((result % 10) + '0');

			if (digit < 15)
				_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
