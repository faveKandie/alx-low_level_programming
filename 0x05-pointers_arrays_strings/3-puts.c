#include "main.h"

/**
 * _puts - Entry point;
 * @str: string being used
 * Return: Always 0 Sucess
 */
void _puts(char *str)
{
	*str[6] = {'H', 'E', 'L', 'L', 'O', '\0'};

	printf("string message: %s\n", *str);
	return (0);
}
