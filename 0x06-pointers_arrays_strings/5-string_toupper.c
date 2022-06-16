#include "main.h"

/**
 * *string_toupper - Entry point
 * @str: character being used
 * Return: Always 0 Success
 */
char *string_toupper(char *)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}
	return (str);
}
