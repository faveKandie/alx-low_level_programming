#include "main.h"

/**
 *
 * @s: characer
 * Return: 
 */
void _puts(char *s)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
