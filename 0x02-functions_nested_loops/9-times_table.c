#include "main.h"
/**
 * times_table - Entry point
 * Return: Always 0 Success
 */
void times_table(void)
{
	int num, digit, result;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		for (digit = 1; digit <= 9; digit++)
		{
			_putchar(',');
			_putchar(' ');
				result = num * digit;

				if ((result) <= 9)
					_putchar(' ');
					else
						_putchar((result / 10) + '0');

					_putchar((result % 10) + '0');
		}
				_putchar('\n');
	}
}
