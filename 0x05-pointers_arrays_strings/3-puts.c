#include "main.h"

/**
 * _puts - Entry point;
 * @str: string being used
 * Return: Always 0 Sucess
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
