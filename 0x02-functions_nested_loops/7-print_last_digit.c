#include "main.h"
/**
 * print_last_digit - Write a function that prints the last digit of a number
 * @a: number being used
 * Return: Always 0 Success
 */
int print_last_digit(int a)
{
	int a;
	int result;
	result = a % 10;

	if (result < a)
		result *= -1;

			_putchar(result + '0');
	return (0);
}
