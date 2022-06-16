#include "main.h"

/**
 * *string_toupper - a function that changes all lower of a string to upper
 * @c: Pointer to first element
 * Return: c
 */
char *string_toupper(char *)
{
	int x = 0;

	while (c[x] != '\0')
	{
		if (c[x] >= 'a' && c[x] <= 'z')
		{
			c[x] = c[x] - 'a' + 'A';
		}
		x++;
	}
	return (c);
}
