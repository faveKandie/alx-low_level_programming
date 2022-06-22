#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: string being used
 * Return: s success
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
