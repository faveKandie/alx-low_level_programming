#include "main.h"

/**
 * *string_toupper - a function that changes all lower of a string to upper
 * @str: string to be changed
 * Return: A pointer to the changed string str
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
