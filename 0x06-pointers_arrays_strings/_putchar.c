#include "main.h"
#include <unistd>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: either 0 or 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
