#include "main.h"
/**
 * print_times_table - Entry point
 * @n: value used
 * Return: Allways 0 Success
 */
void print_times_table(int n)
{
	int num, digit, result;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (digit = 1; digit <= n; digit++)
			{
				_putchar(',');
				_putchar(' ');

				result = num * digit;
				if (result <= 99)
					_putchar(' ');
				if (result <= 9)
					_putchar(' ');

				if (result >= 100)
				{
					_putchar((result / 100) + '0');
					_putchar(((result / 10) % 10) + '0');
				}
				else if (result <= 99 && result >= 10)
				{
					_putchar((result / 10) + '0');
				}
				_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
