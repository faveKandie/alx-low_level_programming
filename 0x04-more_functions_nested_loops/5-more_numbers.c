#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 */
void more_numbers(void)
{
	int n;

	for (n =0; n <= 14; n++)
		_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');

	_putchar('\n');
}
