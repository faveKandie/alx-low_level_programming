#include "main.h"
/**
 * add - Entry point
 * Return: Always result Success
 */
int add(int num1, int num2)
{
	int result;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 1; num2 <= 9; num2++)
		{
			result = num1 + num2;
			if ((result / 10) >= 0)
				_putchar((result / 10) + '0');
			else
				_putchar(' ');
			_putchar((result % 10) + '0');
		}
	}
		_putchar('\n');
		return (result);
}
