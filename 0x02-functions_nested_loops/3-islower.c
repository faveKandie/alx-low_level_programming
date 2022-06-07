#include "main.h"
/**
 * _islower - Returns one if c is lowercase
 * @c - letter being tested
 * Return: 1 and 0 Success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
