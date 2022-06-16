#include "main.h"

/**
 * *string_toupper - a function that changes all lower of a string to upper
 * @c: Pointer
 * Return: pointer in return
 */
char *string_toupper(char *)
{
	int i;

	for (i = 0; a[i] != 0; i++)
	{
		if (a[i] > 90 && a[i] != 10)
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}
