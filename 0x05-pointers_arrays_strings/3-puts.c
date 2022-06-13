#include "main.h"

/**
 * _puts - Entry point;
 * @str: string being used
 * Return: Always 0 Sucess
 */
void _puts(char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
