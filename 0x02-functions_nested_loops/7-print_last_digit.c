#include "main.h"
/**
 * print_last_digit - Write a function that prints the last digit of a number
 * @a: number being used
 * Return: Always 0 Success
 */
int print_last_digit(int a)
{
	int result = a % 10;

	if (result < 0)
	{
		result = (-1 * result);
	}
			_putchar(result + '0');
	return (result);
}
