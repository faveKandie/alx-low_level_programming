#include "main.h"
/**
 * _islower - Returns one if c is lowercase
 * Return: 1 and 0 Success
 */
int _islower(int c)
{
	int c;

	while (c >= 'a')
	{
		for (c <= 'z')
		{
			_putchar(c);
		}
		return (1);
	}
	_putchar(c);
	_putchar('\n');
	return (1);

	else
		return (0);
}
