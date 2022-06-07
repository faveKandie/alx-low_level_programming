#include "main.h"
/**
 * print_to_98 - Entry ruote
 * @n: parameters to be used
 * Return: Always 0 Success
 */
void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		_putchar(' ');

		 if ((n / 10) <= 98)
			 _putchar((n / 10) + '0');
		 else
			 _putchar(' ');
		 _putchar(n % 10);
	}
}
