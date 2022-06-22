#include "main.h"
#include <unistd>

/**
 * _putchar - collects the characcter to stdout
 * @c: character being used
 * Return: On 1 success.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1,&c, 1));
}
