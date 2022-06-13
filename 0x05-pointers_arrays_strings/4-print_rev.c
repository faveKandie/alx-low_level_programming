#include "main.h"

/**
 * print_rev - Entry point
 * @s: character used
 * Return: Always 0 Success
 */
void print_rev(char *s)
{
	int len = 0, index;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
