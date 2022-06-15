#include "main.h"

/**
 * *string_toupper - Entry point
 * Return: Always 0 Success
 */
char *string_toupper(char *)
{
	int i;

	i = o;

	for (str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
