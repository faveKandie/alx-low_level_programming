#include "main.h"
/**
 * print_sign - Entry point
 * @n: the letter being tested
 * Return: Always 0, -1 and 1 Success
 */
int print_sign(int n)
{
	if (n > 0)
		_putchar(+);
	return (1);

	else if (n < 0)
		_putchar(-);
	return (-1);

	else
		_putchar(0);
	return (0);
}
