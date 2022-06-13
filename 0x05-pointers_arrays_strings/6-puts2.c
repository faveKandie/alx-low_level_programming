#include "main.h"

/**
 * puts2 - Entry point
 * @str: character being used
 * Return: Always 0 Success
 */
void puts2(char *str)
{
	int i, j;
	i = 0;

	while (str[i] != '\n')
		i++;
			i--;

	for (j = 0; j <= i; j++)
	{
		if (j % 2 == 0)
			_putchar(str[j]);
	}

	_putchar('\n');
}
